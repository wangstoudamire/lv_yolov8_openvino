# 前言


安装视觉工具包之前，**请先安装2018或更高版本64位LabVIEW **，关于LabVIEW的安装，网上有很多教程，这里就不再赘述，为了能够成功安装运行LabVIEW_OpenVINO_Demo.vi，**请先升级VIPM并安装AI视觉工具包**。

> 工具包下载链接
> https://download.csdn.net/download/virobotics/18434228

# 一、升级VIPM

  1. 下载工具包并打开解压后的文件夹，双击运行【**vipm-21.0.2750-windows-setup.exe**】开始安装；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/a53991bdaaeb4ac68b627aa83bd58d74.png#pic_center)

  2. 直接下一步；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/81fbcc45d8424e37b19b516836279b9a.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_14,color_FFFFFF,t_70,g_se,x_16#pic_center)

  3. 方框内勾选并点击下一步；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/426ec8ccb98a4154b989413c90c00b79.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_14,color_FFFFFF,t_70,g_se,x_16#pic_center)

  4. 等待向导的安装；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/788ad0e736324b1ea46bc869ed0471fd.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center)

  5. 出现如下界面表示向导安装完成，直接下一步；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/9699b8c8ad6b418aaccfaaf472171a7f.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_15,color_FFFFFF,t_70,g_se,x_16#pic_center)

  6. 我接受，然后下一步；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/5220c292b9784dd096b8171a11e2b606.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_15,color_FFFFFF,t_70,g_se,x_16#pic_center)

  7. 选择安装路径，然后下一步；

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/bb6b57cfb1da4fa7a5d4a86ff7c48859.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_15,color_FFFFFF,t_70,g_se,x_16#pic_center)

  8. 等待安装，安装过程耗十分钟左右

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/51965028b6c8403d8507c897eecf100e.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_15,color_FFFFFF,t_70,g_se,x_16#pic_center)

  9. 取消勾选Restart machine,点击完成

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/77ef7d8d78934644a8c21b2165d726f2.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_14,color_FFFFFF,t_70,g_se,x_16#pic_center)




# 二、AI视觉工具包的安装

1. 打开解压后的文件夹，双击运行【**techforce_lib_opencv_cpu-1.0.0.xx.vip**】开始安装；

  ![在这里插入图片描述](https://img-blog.csdnimg.cn/def7dc21452e40de863015594dbc7f63.png#pic_center)


  2. 等待几秒钟会出现如下界面，点击Install进行安装 ； 	![在这里插入图片描述](https://img-blog.csdnimg.cn/264afefec2bf4cadadd4bcd644039057.png#pic_center)

  3. 安装需要几分钟，等待一会，出现如下界面，全部勾选，并点击continue; 	![在这里插入图片描述](https://img-blog.csdnimg.cn/b4622f7fff5c43a39fac726e7b11fdfe.png#pic_center)

  4. 点击‘Yes,I accept......’	![在这里插入图片描述](https://img-blog.csdnimg.cn/85cac4df661b4037aa9185bcdef8f894.png#pic_center)

 5. 如下图所示，均显示为No Errors即成功安装，点击Finishj即可；
    ![在这里插入图片描述](https://img-blog.csdnimg.cn/43087e252947458d9cd6cb2eb41f3fdb.png#pic_center)

 6. 成功安装后打开LabVIEW并新建VI，在**程序框图面板**(记得是<font color="red">程序框图面板，不是前面板</font>哦)中鼠标右键-->点击Addons-->可以看到附加工具包Addons中多了一项"VIRobotics"-->点击VIRobotics-->点击函数选版opencv_yiku，可以找到我们刚刚安装好的工具包中所有的机器视觉相关函数。
    ![在这里插入图片描述](https://img-blog.csdnimg.cn/9141fa03136f4cb7842e782c9152ffe8.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBAdmlyb2JvdGljcw==,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center)



# 联系我们

如有任何需求帮助，可根据以下方式联系我们。

**上海仪酷智能科技有限公司（VIRobotics）**

**公司创始人：王立奇**

邮箱：248996085@qq.com

微信号：wangstoudamire



**研发工程师：李俊青**

邮箱：1784655918@qq.com

微信号：jq15235256338



**微信公众号**：VIRobotics

如您想要探讨更多关于LabVIEW与人工智能技术，欢迎加入我们的技术交流群：705637299。进群请备注：yolov8_openvino

