func f(a : int, b : int) : bool
    var x : int
    x = a;
    return x == x;
endfunc


func main()
    var p : array [10] of int
    var l : array [1] of bool
    var x : int

    var y : bool
    y = f(x,x,x);
    y = f(x,y);
    
endfunc
