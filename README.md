# Dui-Pai
## 功能
给 OIers 的一个简单但方便的 CLI 对拍程序。用 C++ 实现。

![](https://s2.loli.net/2022/08/26/JneZ15wS4ts6fgK.png)

特点：
- 直接显示 hack 数据、错误和正确的输出，而无需费事打开文件。
- 无需手动编译；可以自动编译所需代码，编译错误会提示。
- 实时显示已尝试过的数据组数，且可设置更新频率。
- 可以修改代码来自定义更多功能。

请注意，只能在 Windows 中使用。

下面的初始化步骤看起来可能有些复杂，但只要第一次使用时操作即可。

## 初始化
1. 按上方绿色的 `Code` 按钮，选择 `Download Zip`，解压压缩包。
1. 把 GCC (或称 MinGW, MinGW-w64) 路径添加到环境变量 `Path` 里。如果你用的是代码编辑器，你应该已经做过了，可以跳过；如果你没做过，你需要：
    1. 进入你写代码用的 IDE 的安装目录，找里面名字类似 `MinGW` 或 `GCC` 的文件夹，进入它，再进入它里面的文件夹 `bin`，然后点击上面的路径栏，复制路径。（如果找不到，[下载 MinGW-w64](https://nchc.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-win32/seh/x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z) ，解压并如上操作）
    1. 点击“开始”按钮，输入 `environ`, 点击“编辑系统环境变量”，再点击 `环境变量(N)` 。
    1. 有两个列表，双击下面的列表中的 `Path` 一行，点击右侧的 `新建(N)` 。在出现的新行中粘贴刚才的路径。最后连续点 `确定` 。

## 使用方法
1. 把你要对拍的程序复制到本程序文件夹中的 `Program.cpp` 中，把标程复制到 `Std.cpp` 中。
1. 在 `Data_Generator.cpp` 中，编写程序来随机生成输入数据。不需要打开任何文件，直接 `cout` 你生成的输入数据即可。三段代码保存即可，无需编译。
1. 最后，编译运行 `Dui_Pai.cpp`，对拍就开始了。

## 设置
- 在 `Dui_Pai.cpp` 中，你可以修改常量的值：
    - `NOTICE_FREQUENCY` 控制每隔多少组数据提醒一次。
    - `DIVIDING_LINE_LENGTH` 控制水平分割线的长度。
- 你还可以任意修改代码，让它更符合你的需求。
- 如果你有改进建议，欢迎发布到 GitHub 上来！
