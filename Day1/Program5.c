{
float sales;
printf("Enter the total sales:");
scanf("%f", &sales);
if(sales>=10000 && sales<30000)
{
printf("Commission is:%f",sales*0.15);
}
else if(sales>=30000)
{
printf("Commission is:%f",(sales*0.25)+1000);
}
else
{
printf("NO COMMISSION");
}
return 0;
}