在mac上使用vscode需要执行一系列复杂的步骤：[在Visual Studio Code中使用Clang](https://code.visualstudio.com/docs/cpp/config-clang-mac)

期间遇到一个环境问题：
```
xcrun: error: invalid active developer path (/Library/Developer/CommandLineTools), missing xcrun at: /Library/Developer/CommandLineTools/usr/bin/xcrun
```
经查找，需要现在终端执行：`xcode-select --install`