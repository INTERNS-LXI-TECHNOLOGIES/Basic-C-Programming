#include<stdio.h>
#include<math.h>
struct square{
    float side,areaS;
}square;
union Sqr{
    struct square s;
};
struct rectangle{
    float length,breadth,areaR;
}rectangle;
union Rect{
    struct rectangle r;
};
struct triangle{
    float base,height,areaT;
}triangle;
union Tri{
    struct triangle t;
};
struct circle{
    float pi;
    float radious,areaC;
}circle;
union Cir{
    struct circle c;
};

float Square(union Sqr S){
    printf("\nThe area of square is : ");
    S.s.areaS = pow(S.s.side,2);
    printf("%f",S.s.areaS);
    return S.s.areaS;
}
float Rectangle(union Rect R){
    printf("\nThe area of rectangle is : ");
    R.r.areaR = R.r.length*R.r.breadth;
    printf("%f",R.r.areaR);
    return R.r.areaR;
}
float Triangle(union Tri T){
    printf("\nThe area of triangle is : ");
    T.t.areaT = (T.t.base*T.t.height)/2;
    printf("%f",T.t.areaT);
    return T.t.areaT; 
}
float Circle(union Cir C){
    printf("\nThe area of circle is : ");
    C.c.areaC = C.c.pi*pow(C.c.radious,2);
    printf("%f",C.c.areaC);
    return C.c.areaC;
}
int main(){
    int option;
    float si,ar=0;
    float len,br,arr=0;
    float bas,hi,art=1;
    float rad,arc=0;
    printf("\nEnter the option  : \n1:Area of square \n2:Area of rectangle \n3:Area of triangle \n4:Area of circle\n");
    scanf("%d",&option);
    if(option==1){
        printf("\nEnter the sidde of the square : ");
        scanf("%f",&si);
        union Sqr S = {si,ar};
        Square(S);
    }
    else if(option==2){
        printf("\nEnter the length and breadth of rectangle : ");
        scanf("%f%f",&len,&br);
        union Rect R = {len,br,arr};
        Rectangle(R);
    }
    else if (option==3){
        printf("\nEnter the base and height of triangle : ");
        scanf("%f%f",&bas,&hi);
        union Tri T = {bas,hi,art};
        Triangle(T);
    }
    else if (option==4){
        printf("\nEnter the radious of the circle : ");
        scanf("%f",&rad);
        union Cir C = {3.14,rad,arc};
        Circle(C);
    }
    else {
        printf("\nWrong option");
    }
}