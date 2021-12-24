1. **vmware 安装**   :    iso 镜像文件加载   由于分辨率设置导致继续按钮看不到解决： 取消自由拉伸和保持纵横比拉伸。

2. **vmware tools ** ：   加载 `linux.iso` 文件 ， 复制`VMwareTools-10.3.23-17030940.tar.gz`到桌面打开 ，运行终端， `sudo vmware-install.pl`  ， 一路确认即可.

3. **Ubuntu虚拟机共享主机VPN** ： https://www.codenong.com/js6c7abd4adc9b/

4. **安装Terminator**   ：  [How to Install Terminator, a Linux Terminal Emulator on Steroids](https://dev.to/xeroxism/how-to-install-terminator-a-linux-terminal-emulator-on-steroids-1m3h)

5. **安装GCC** ：   ![image-20211222165907518](C:\Users\pc\AppData\Roaming\Typora\typora-user-images\image-20211222165907518.png)

6. **安装VScode** :  `......`

7. **CMakeLists.txt** :   `cmake..` :  以外部编译的方式生成`make`文件           `make`  ：  编译

8. **Vscode Debug** :  `launch.json` ： for debug

   ```Json
   {
       // 使用 IntelliSense 了解相关属性。 
       // 悬停以查看现有属性的描述。
       // 欲了解更多信息，请访问: https://go.microsoft.com/fwlink/?linkid=830387
       "version": "0.2.0",
       "configurations": [
           {
               "name": "g++.exe - 生成和调试活动文件",
               "type": "cppdbg",
               "request": "launch",
               "program": "${workspaceFolder}/ans.exe",  //  要调试的输出程序的相对
               "args": [],
               "stopAtEntry": false,
               "cwd": "${workspaceFolder}",
               "environment": [],
               "externalConsole": false,
               "MIMode": "gdb",
               "miDebuggerPath": "C:\\sofeware\\mingw64\\bin\\gdb.exe",
               "setupCommands": [
                   {
                       "description": "为 gdb 启用整齐打印",
                       "text": "-enable-pretty-printing",
                       "ignoreFailures": true
                   }
               ],
               "preLaunchTask": "C/C++: g++.exe 生成活动文件"
           }
       ]
   }
   ```

    `task.json `： for bulid before debug

   ``` Json
   {
       "tasks": [
           {
               "type": "cppbuild",
               "label": "C/C++: g++.exe 生成活动文件",
               "command": "C:\\sofeware\\mingw64\\bin\\g++.exe",
               "args": [
                   "-fdiagnostics-color=always",
                   "-g",
                   "${file}",
                   "-o",
                   "${fileDirname}\\${fileBasenameNoExtension}.exe"
               ],
               "options": {
                   "cwd": "${fileDirname}"
               },
               "problemMatcher": [
                   "$gcc"
               ],
               "group": {
                   "kind": "build",
                   "isDefault": true
               },
               "detail": "调试器生成的任务。"
           }
       ],
       "version": "2.0.0"
   }			
   ```




