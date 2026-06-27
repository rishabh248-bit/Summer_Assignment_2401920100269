//1
interface Test{
    int square(int x);
}
class Arithmetic implements Test{
  @Override
    public int square(int x){
        return x*x;
    }
}
class ToTestInt{
    public static void main(String[] args){
        Arithmetic obj = new Arithmetic();
        int result = obj.square(6);
        System.out.println("Square = " + result);
    }
}

//2
class Outer{
    void display(){
        System.out.println("Display method of Outer class");
    }
    class Inner{
        void display(){
            System.out.println("Display method of Inner class");
        }
    }
}
class Main2{
    public static void main(String[] args){
        Outer obj1 = new Outer();
        obj1.display();
        Outer.Inner obj2 = obj1.new Inner();
        obj2.display();
    }
}

//3
class Point{
    private int x, y;
    Point() {
        x = 0;
        y = 0;
    }
    Point(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void setX(int x){
        this.x = x;
    }
    public void setY(int y){
        this.y = y;
    }
    public void setXY(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void display(){
        System.out.println("Point = (" + x + ", " + y + ")");
    }
    public static void main(String[] args){
        Point p1 = new Point();
        p1.setXY(1, 2);
        p1.display();
        Point p2 = new Point(3, 4);
        p2.display();
    }
}

//4
class Box{
    double l;
    double b;
    Box(double l, double b){
        this.l = l;
        this.b = b;
    }
    double area(){
        return l*b;
    }
}
class Box3D extends Box{
    double h;
    Box3D(double l, double b, double ht){
        super(l, b);
        this.h = ht;
    }
    double volume(){
        return l*b*h;
    }
}
class Main4{
    public static void main(String[] args){
        Box b = new Box(5, 4);
        System.out.println("Area = " + b.area());
        Box3D b2 = new Box3D(5, 4, 3);
        System.out.println("Volume = " + b2.volume());
    }
}
