class Solution {
public:
    string intToRoman(int num) {
        string r="";
while(num>=1000){
    num-=1000;
    r+="M";
}
while(num>=900){
    num-=900;
    r+="CM";
}
while (num>=500){
    num-=500;
    r+="D";
}
while (num>=400){
num-=400;
r+="CD";

}
while(num>=100){
    num-=100;
    r+="C";
}
while (num>=90){
    num-=90;
    r+="XC";
}
while (num>=50){
    num-=50;
r+="L";
}
while(num>=40){
    num-=40;
    r+="XL";
}
while (num>=10){
    num-=10;
    r+="X";
}
while (num>=9){
    num-=9;
    r+="IX";
}
while (num>=5)
{
    num-=5;
    r+="V";
}
while(num>=4){
    num-=4;
    r+="IV";
}
while(num>=1){
    num-=1;
    r+="I";
}
return r;

    }
};