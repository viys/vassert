# vassert
嵌入式c断言宏

使用时需要将assert_printf对接到嵌入式平台的打印函数

关闭时仅需在`#include "vassert.h"`上方`#define NDEBUG`即可