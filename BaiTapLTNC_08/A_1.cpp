#include <iostream>

using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << "Dia chi cua x: "<<&x<<endl;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout << "Dia chi cua y: "<<&y<<endl;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
//Nhan xet: dia chi cua 2 bien x trong ham f va bien y trong ham g la giong nhau boi vi:
//2 ham f va g deu co cung 1 kieu tra ve, deu co cung 1 bien kieu int la bien dia phuong dau tien trong moi ham
//khi loi goi ham f ket thuc, vi tri stackframe cua ham f dung trc do bay gio la vi tri cua ham g
