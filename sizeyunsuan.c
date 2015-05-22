 public class test {
    private int a;
    private int b;
    private int c;
    private int d;
    private int e;
    int f;
    
    public int  add(int a,int b)
    {
        c = a+b;
        System.out.println("这是加法运算");
        return c;
        
    }
    public int  jian(int a,int b)
    {
        c=a-b;
        System.out.println("这是减法运算");
        return c;
        
        
    }
    public int Cheng(int a,int b)
    {   
        c=a*b;
        System.out.println("这是乘法运算");
        return c;
    }
    public double  Chu(int a,int b)
    {
        try
        {
        double c;
        c=(double) (Math.round((a/b)*100/100.0));
        if(b!=0)
            System.out.println("这是除法运算");
        }
        catch(ArithmeticException e)
        {
            System.out.println("分母不能为0！"); 
            
        }
        return c;
    }
    
    
    public int  Addjian(int a,int b,int c)
    {
        f=a+b-c;
        System.out.println("这是加减运算");
        return f;
        
    }
    
    public int  Addcheng(int a,int b,int c)
    {
        f=a+b*c;
        System.out.println("这是加乘运算");
        return f;
    }
    
    public int  Addchu(int a,int b,int c)
    {
        f=a+b/c;
        System.out.println("这是加除运算");
        return f;
    }
    
    public int  Jiancheng(int a,int b,int c)
    {
        f=a-b*c;
        System.out.println("这是减乘运算");
        return f;
    }
    
    public int  Jianchu(int a,int b,int c)
    {
        f=a-b/c;
        System.out.println("这是减除运算");
        return f;
    }
    
    public int  Chengchu(int a,int b,int c)
    {
        f=a*b/c;
        System.out.println("这是乘除运算");
        return f;
    }
 
    public int  Addjiancheng(int a,int b,int c,int d)
    {
        f=a+b-c*d;
        System.out.println("这是加减乘运算");
        return f;
    }
    
    public int  Addjianchu(int a,int b,int c,int d)
    {
        f=a+b-c/d;
        System.out.println("这是加减除运算");
        return f;
    }
    
    public int  Addjianchengchu(int a,int b,int c,int d,int e)
    {
        f=a+b-c*d/e;
        System.out.println("这是加减乘除运算");
        return f;
    }
    
}

 
public class main {
    public static void main(String[] args) {
        test Jia=new test();
        Jia.add(1, 1);
        
        test Jian=new test();
        Jian.jian(2,1);
        
        test cheng=new test();
        cheng.Cheng(2,3);
        
        test chu=new test();
        chu.Chu(3,0);
        
        test addjian=new test();
        addjian.Addjian(1,2,3);
        
        test addcheng=new test();
        addcheng.Addcheng(0,2,1);
        
        test addchu=new test();
        addchu.Addchu(0,2,1);
        
        test jiancheng=new test();
        jiancheng.Jiancheng(0,2,1);
        
        test jianchu=new test();
        jianchu.Jianchu(0,2,1);
        
        test chengchu=new test();
        chengchu.Chengchu(0,2,1);
        
        test addjiancheng=new test();
        addjiancheng.Addjiancheng(0,2,1,1);
        
        test addjianchu=new test();
        addjianchu.Addjianchu(0,2,1,1);
        
        test addjianchengchu=new test();
        addjianchengchu.Addjianchengchu(0,2,1,1,1);

        }
    }
