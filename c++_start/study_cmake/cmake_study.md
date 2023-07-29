## cmake 学习入门记录文档

### 1.1 cmake tutorial 链接
https://cmake.org/cmake/help/latest/guide/tutorial/index.html

### 1.2 如何构建简单的可执行文件和库文件
#### 1.2.1 cmake 如何构建简单的 target
现代cmake围绕着Target这一核心特性组织c/c++项目的结构, 管理其配置、编译、单元测试、打包等.

**Cmake有三个基本命令, 用于定义cmake target. 分别是**

+ add_executable() —— 该命令用于定义一个可以构建成可执行程序的target
add_executable(<name> [WIN32] [MACOSX_BUNDLE] [EXCLUDE_FORM_ALL] [source1] [source2 ...])
    - name是target的名字, 这个参数必须提供  
    - 第二个参数WIN32是windows平台特定的可选参数  
    - MACOSX_BUNDLE是第三个参数, 是apple平台的特定参数  
    - EXCLUDE_FORM_ALL是第四个参数, 如果存在, 默认构建的时候就不会构建这个target  
    - 后续可选参数均为构建可执行文件所需的源码  
add_executable(main main.cpp) 表示定义了一个编译成可执行程序的target, 名字为main, 源码只有一个main.cpp


+ add_library() —— 该命令用于定义构建成库文件的target
add_library(<name> [STATIC|SHARED|MODULE] [EXCLUDE_FORM_ALL] [<source>...])
    - STATIC|SHARED|MODULE 三个参数只能有一个  
    - STATIC表示静态库, SHARED表示动态库, MODULE表示类似于动态库但不会被其他库或者可执行程序链接的用于插件式框架的软件的插件构建  
    - 也可以通过 cmake-DBUILD_SHARED_LIBS=YES的形式传值告诉构建者需要构建哪种库


+ add_custom_target()



### 1.3 全面介绍CMake的基础知识


### 1.4 深入Cmake


### 1.5 Cmake工程实践


### 1.6 CMake管理的开源项目


### 1.7 Cmake模板分享



