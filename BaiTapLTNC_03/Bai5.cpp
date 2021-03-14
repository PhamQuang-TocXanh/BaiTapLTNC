#include<iomanip>
#include<iostream>
using namespace std;
class SinhVien{
private:
    double diemtoan,diemly,diemanh,diemtb;
public:
    void setDiemToan(const double &diemtoan){
        this->diemtoan=diemtoan;
    }
    void setDiemLy(const double &diemly){
        this->diemly=diemly;
    }
    void setDiemAnh(const double &diemanh){
        this->diemanh=diemanh;
    }
    double getDiemToan(){
        return diemtoan;
    }
    double getDiemAnh(){
        return diemanh;
    }
    double getDiemLy(){
        return diemly;
    }
    double getDiemTB (){
        diemtb=(diemanh+diemly+diemtoan)/3;
        return diemtb;
    }
};

void sapxep(SinhVien sv[], int n){
    cout << "Theo diem mon Toan: \n";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sv[i].getDiemToan()<sv[j].getDiemToan()){
                SinhVien t=sv[i];sv[i]=sv[j];sv[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << "Sinh Vien " << setw(10) << left <<  i+1 << "   " << sv[i].getDiemToan() << " " << sv[i].getDiemLy() << " "  << sv[i].getDiemAnh() << endl;
    }
}

int main(){
    int n;
    double diemtoan,diemly,diemanh;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    SinhVien sv[10000];
    for(int i=0;i<n;i++){
        cout << "Nhap diem toan cua sinh vien " << i+1 <<": "; cin >> diemtoan; sv[i].setDiemToan(diemtoan);
        cout << "Nhap diem ly cua sinh vien " << i+1 <<": "; cin >> diemly; sv[i].setDiemLy(diemly);
        cout << "Nhap diem anh cua sinh vien " << i+1 <<": "; cin >> diemanh; sv[i].setDiemAnh(diemanh);
    }
    sapxep(sv, n);
    return 0;
}

