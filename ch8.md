- 指针和引用
    - 指针
        - 定义：存储  **内存地址** 的 ***变量*** ；是一种指向内存单元的特殊变量；也是变量，也占用内存；建议 ***初始化***
        - 声明
            ```
            PointType *PointerVariableName;
            eg: int *pointsToInt = NULL;
            // 若不初始化指针，该指针的值为随机内容。所以建议初始化
            ```
        - 使用引用运算符&，获取变量的地址
        - 使用指针存储地址 
            ```
            Type* pointer = &Variable; 
            eg:int* agePointer = &age;```

        - 使用解除引用运算符*，获取指针所指向的数据内容
        - sizeof()获取指针的大小，此时该大小与指针指向的内存数据类型无关
        - 动态分配内存new、delete、delete[]
        - 将递增、递减运算符用于指针
        - const 用于指针
            - 指针包含的地址是常量，地址不能修改，地址所指向的内容可修改  ```int* const pointerToAge```
            - 指针指向的类型是常量，地址可以修改，地址所指向的内容不可修改 ```const int* pointerToAge```
            - 指针的地址是常量，指向的内容也是常量，都不可修改 ```const int* const pointerToAge```
            - const修饰的指针不能负值给非const修饰的指针
        - 将指针传递给函数
        - 内存泄漏
            - new动态分配的内存，一定要delete
            - 在使用接触引用运算符，获取指针所指向的数据时，务必保证，指针指向了有效的内存单元
            - 注意悬浮指针，在delete指针后，应避免使用此指针，可以在delete后，设置改指针为NULL
            - 检查new的内存分配请求，确保成功
                - 使用异常
                - new(nothrow)申请内存，此举若申请失败，将返回NULL

    - 引用
        - 定义：引用是变量的别名
        - 声明：
            ```
            VarType original = Value;
            VarType &ReferenceVariable = original;
            ```
        - const 用于引用，值不可修改
        - 引用向函数传递参数

