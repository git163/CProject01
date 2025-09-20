# CProject01
CProject01
# this is first cxx project

## ptrace权限问题
```bash
echo 0 | tee /proc/sys/kernel/yama/ptrace_scope # 临时生效
# 永久生效
vim /etc/sysctl.d/10-ptrace.conf
kernel.yama.ptrace_scope = 0 
sysctl --system
```

## launch 配置
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "C++ Remote Debug",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/hello",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "miDebuggerPath": "/usr/bin/gdb", // 确保路径正确
            //"preLaunchTask": "build" // 可选：自动编译
        },
        {
            "name": "C++ Attach to Process (Local/Remote)",
            "type": "cppdbg",
            "request": "attach",
            "program": "${workspaceFolder}/build/hello",  // 必须是完整路径！
            "processId": "540033",        // 或直接写死 PID，如 "12345"
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
        }
    ]
}
```