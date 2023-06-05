#include <openvino/openvino.hpp>

//定义OpenVINO推理时需要传递的数据结构
typedef struct lv_ov_engine {
    ov::Core ovCore;
    ov::InferRequest infer_request;
} OvEngineStruct;

//将OpenVINO IR模型载入指定的推理设备
extern "C" __declspec(dllexport) OvEngineStruct * create_ir(char* xml_file, char* device_name)
{
    OvEngineStruct* p = new OvEngineStruct();
    auto compiled_model = p->ovCore.compile_model(xml_file, device_name);
    p->infer_request = compiled_model.create_infer_request();
    return p;
}

//输入预处理后的图像数据,执行推理计算
extern "C" __declspec(dllexport) void infer(OvEngineStruct * p, float* inputData)
{
    ov::Tensor input_tensor0 = p->infer_request.get_input_tensor(0);
    auto data0 = input_tensor0.data<float>();
    memcpy(data0, inputData, 1 * 3 * 640 * 640 * sizeof(float));
    p->infer_request.infer();
}

//获取推理后的结果（yolov8输出张量的大小为1*84*8400）
extern "C" __declspec(dllexport) void getResult(OvEngineStruct * p, float* data)
{
    auto output = p->infer_request.get_output_tensor(0);
    const float* f = output.data<float>();
    memcpy(data, f, sizeof(float) * 1 * 84 * 8400);

}

//释放推理引擎
extern "C" __declspec(dllexport) void release(OvEngineStruct * p)
{
    delete p;
}