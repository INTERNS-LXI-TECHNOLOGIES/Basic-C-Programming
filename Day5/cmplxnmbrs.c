#include<stdio.h>
struct COMPLEX
{
    int REAL;
    int IMG;
};
void main()
{
    struct COMPLEX A,B,C;
    struct COMPLEX multi_complex(struct COMPLEX,struct COMPLEX);
    printf("\nENTER REAL PART OF A :");
    scanf("%d",&A.REAL);
    printf("\nENTER IMAGINARY PART OF A :");
    scanf("%d",&A.IMG);
    printf("\nENTER REAL PART OF B :");
    scanf("%d",&B.REAL);
    printf("\nENTER IMAGINARY PART OF B :");
    scanf("%d",&B.IMG);
    C=multi_complex(A,B);
    printf("\nRESULT FOR C :\n");
    printf("(%d + %d) * (%d + %d) = %d + %d",A.REAL,A.IMG,B.REAL,B.IMG,C.REAL,C.IMG);
  
}
struct COMPLEX multi_complex(struct COMPLEX A,struct COMPLEX B)
{
    struct COMPLEX R;
    R.REAL=(A.REAL*B.REAL)-(A.IMG*B.IMG);
    R.IMG=(A.REAL*B.IMG)+(A.IMG*B.REAL);
    return R;
}