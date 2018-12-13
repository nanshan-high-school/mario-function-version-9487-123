#include <iostream>
using namespace std;
int main() {
int height;
do
{
cout << "請輸入三角形高度(1-8):";
cin >> height;
}
while (9>height & height>0); {
for (int a=0;a<height;a++) {
for (int b=height;b>a;b--) {
cout << " ";
}
for (int b=0;b<=a;b++) {
cout << "#";
}
cout << "  ";
for (int b=0;b<=a;b++) {
cout << "#";
}
cout << "\n";
}
cout << "高度:" << height << "\n";
}
}

