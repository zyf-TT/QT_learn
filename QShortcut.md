Qt 提供了一系列快捷键，分为以下几种场景：**Qt Creator 快捷键**（用于开发）和 **Qt 应用程序中实现的快捷键**（用于用户操作）。以下分别列出两类快捷键的常用操作。

---

## **一、Qt Creator 快捷键**
这些快捷键适用于 Qt Creator 开发环境，帮助你提升开发效率。

### **代码编辑**
| 快捷键                      | 功能                           |
|-----------------------------|--------------------------------|
| `Ctrl + Space`              | 自动补全代码                  |
| `Ctrl + Shift + U`          | 转换选中代码的大小写          |
| `Ctrl + D`                  | 复制当前行或选中内容          |
| `Ctrl + L`                  | 删除当前行                    |
| `Ctrl + /`                  | 切换注释（单行注释）          |
| `Ctrl + Shift + /`          | 块注释/取消块注释             |
| `Ctrl + G`                  | 跳转到指定行                  |
| `Alt + Enter`               | 快速修复或显示意图操作        |
| `Ctrl + R`                  | 替换文本                      |
| `Ctrl + Shift + R`          | 替换整个项目中的文本          |
| `Ctrl + Shift + .`          | 缩进代码                      |
| `Ctrl + Shift + ,`          | 减少代码缩进                  |

### **文件与导航**
| 快捷键                      | 功能                           |
|-----------------------------|--------------------------------|
| `Ctrl + O`                  | 打开文件                      |
| `Ctrl + E`                  | 显示最近使用的文件             |
| `Ctrl + Tab`                | 切换打开的文件                |
| `Ctrl + K`                  | 跳转到命令栏                  |
| `Ctrl + Shift + F`          | 搜索整个项目的内容            |
| `Ctrl + F`                  | 搜索当前文件                  |
| `F2`                        | 跳转到声明或定义              |
| `Alt + Left/Right Arrow`    | 在历史记录中前进/后退         |
| `Ctrl + B`                  | 转到符号定义                  |
| `Ctrl + T`                  | 打开文件树视图                |

### **运行与调试**
| 快捷键                      | 功能                           |
|-----------------------------|--------------------------------|
| `Ctrl + R`                  | 运行项目                      |
| `F5`                        | 启动调试                      |
| `Ctrl + F5`                 | 运行不调试                    |
| `F10`                       | 单步调试（跳过函数）          |
| `F11`                       | 单步调试（进入函数）          |
| `Shift + F11`               | 单步调试（跳出函数）          |
| `Ctrl + Shift + B`          | 构建项目                      |
| `Ctrl + Shift + U`          | 清理项目                      |

### **版本控制**
| 快捷键                      | 功能                           |
|-----------------------------|--------------------------------|
| `Ctrl + K`                  | 提交更改（VCS 提交）          |
| `Ctrl + Shift + K`          | 拉取/推送到远程仓库           |
| `Ctrl + Shift + G`          | 打开 Git 面板                 |

---

## **二、Qt 应用程序中实现快捷键**
在 Qt 编程中，你可以为应用程序的功能实现自定义快捷键。以下是相关方法和常用快捷键设置：

### **1. 设置快捷键**
在代码中可以使用 `QShortcut` 或 `QAction` 来设置快捷键。

#### **QAction 示例**
```cpp
QAction *exitAction = new QAction("Exit", this);
exitAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
connect(exitAction, &QAction::triggered, this, &MainWindow::close);
menuBar()->addAction(exitAction);
```

#### **QShortcut 示例**
```cpp
QShortcut *shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_N), this);
connect(shortcut, &QShortcut::activated, this, &MainWindow::newFile);
```

---

### **2. 常见快捷键实现**
| 快捷键                     | 功能                 | 示例代码                              |
|----------------------------|----------------------|---------------------------------------|
| `Ctrl + N`                 | 新建文件            | `QKeySequence(Qt::CTRL + Qt::Key_N)` |
| `Ctrl + S`                 | 保存文件            | `QKeySequence(Qt::CTRL + Qt::Key_S)` |
| `Ctrl + O`                 | 打开文件            | `QKeySequence(Qt::CTRL + Qt::Key_O)` |
| `Ctrl + Q`                 | 退出程序            | `QKeySequence(Qt::CTRL + Qt::Key_Q)` |
| `Ctrl + Z`                 | 撤销                | `QKeySequence::Undo`                 |
| `Ctrl + Shift + Z`         | 重做                | `QKeySequence::Redo`                 |
| `Ctrl + C`                 | 复制                | `QKeySequence::Copy`                 |
| `Ctrl + V`                 | 粘贴                | `QKeySequence::Paste`                |
| `Ctrl + X`                 | 剪切                | `QKeySequence::Cut`                  |
| `Ctrl + F`                 | 查找                | `QKeySequence::Find`                 |
| `Ctrl + H`                 | 替换                | `QKeySequence::Replace`              |

---

### **3. 获取键盘事件**
如果需要捕获键盘事件，可以在窗口类中重载 `keyPressEvent()`：

```cpp
void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        close();  // 按下 Esc 关闭窗口
    }
}
```
