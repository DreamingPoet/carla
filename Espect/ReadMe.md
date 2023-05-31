carla 编译

编译 python 客户端

pip install setuptools
pip install wheel

要给 carla 扩展功能
1、扩展 python client 的功能
PythonAPI 的源码中添加 函数
然后用 make PythonAPI 重新打包 egg 和 whl

2、如果PythonAPI 调用了 LibCarla 中的函数
则需要在 LibCarla 中 增加相应函数

然后用 make LibCarla 重新打包 .lib 静态库
然后用新的插件重新 打包 CarlaUE4.exe

3、如果LibCarla 接收的数据来自 CarlaServer
那么需要修改 CarlaUE4 的插件

然后用 make LibCarla 重新打包 .lib 静态库
然后用新的插件重新 打包 CarlaUE4.exe