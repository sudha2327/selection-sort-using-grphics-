#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void swap(int,int);
void draw(int,int,int);
void draw1(int,int,int);
void select(int[],int);
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  int n;
  printf("enter the value for how many number you wants to store:\n");
  scanf("%d",&n);
  //ARRAY  declaration
  int a[200],i;
  printf("enter the array element:\n");
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);

  }
  //just show the elements alredy stored in the array
  rectangle(100,150,500,200);
 for(i=0;i<n;i++){
   draw(110+i*100,140,a[i]);
   getch();
 }
 select(a,n);
 rectangle(100,250,500,300);

 settextstyle(6,0,5);
 setcolor(GREEN);
 line(100,220,500,220);
 line(100,230,500,230);
 setcolor(WHITE);
 outtextxy(100,300,"Selection Sort");
 //print the array after done selection sorting
 for(i=0;i<n;i++){
//  printf("%d",a[i]);
draw1(110+i*100,240,a[i]);

 }


getch();
}

void draw(int x,int y,int a){
  char s[20];
  sprintf(s,"%d",a);
  settextstyle(6,0,5);
  setcolor(RED);
  outtextxy(x,y,s);
  setcolor(WHITE);
  line(60+x,150,60+x,200);


}
void draw1(int c,int v,int a){
  char s[20];
  sprintf(s,"%d",a);
  settextstyle(6,0,5);
  setcolor(BLUE);
  outtextxy(c,v,s);
  setcolor(WHITE);
  line(60+c,250,60+c,300);


}



void select(int b[],int l){
int pass,i;
for(pass=0;pass<l-1;pass++){
  int min_index=pass;
  for(i=pass+1;i<l;i++){
    if(b[i]<b[min_index]){
     min_index=i;
    }
    int temp; //for swapping
    temp=b[min_index];
    b[min_index]=b[pass];
    b[pass]=temp;

  }

}



}