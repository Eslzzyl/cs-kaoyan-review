## TeX 文档共享颜色

本目录下包含了一些自定义的彩色笔色号。可在 LaTeX 文档内引用。

遗憾的是，似乎有点色差。

### 用法

在目标 LaTeX 文档中使用：
```latex
\documentclass{article}
\usepackage[dvipnames]{xcolor}

\input{/path/to/file/in/this/folder}

\begin{document}
\textcolor{color-name}{文本}
\end{document}
```

如果文档引入了其他宏包，而这些宏包已经引用过`xcolor`，此时可在`documentclass`声明前加上
```latex
\PassOptionsToPackage{dvipsnames}{xcolor}
```
来替代
```latex
\usepackage[dvipnames]{xcolor}
```

### 颜色说明

#### 百乐 Juice

