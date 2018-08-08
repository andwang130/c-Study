int main() {
//
//    声明Lambda表达式
//
//    Lambda表达式完整的声明格式如下：
//
//    [capture list] (params list) mutable exception-> return type { function body }
//
//    各项具体含义如下
//
//    capture list：捕获外部变量列表
//    params list：形参列表
//    mutable指示符：用来说用是否可以修改捕获的变量
//    exception：异常设定
//    return type：返回类型
//    function body：函数体
//
//    此外，我们还可以省略其中的某些成分来声明“不完整”的Lambda表达式，常见的有以下几种：
//    序号	格式
//    1 	[capture list] (params list) -> return type {function body}
//    2 	[capture list] (params list) {function body}
//    3 	[capture list] {function body}
    [](int a, int b) -> bool { return a < b; };//lamdba
    int a=1;
    int b=2;
    //值捕获
    auto func=[a]{ return a+1;};

    //引用捕获，和普通的函数传递引用没有区别
    auto func1=[&a]{ return a+1;};

    //隐式值捕获,外部的所有变量可以使用，都为在值捕获
    auto func2=[=]{ return a+b;};
    //隐式引用捕获,都为引用捕获
    auto func3=[&]{
        a=10;
        return a+b;};
    int c=func3();
    std::cout<<a<<std::endl;
    return 0;

}
