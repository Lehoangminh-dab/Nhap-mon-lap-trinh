// cre: nhàn rách
string tong(string a, string b)
{
    int x, y, nho=0, tong;
    string c = "";
    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;
    for(int i=a.length()-1; i>=0; i--)
    {
        x = a[i]-48;
        y = b[i]-48;
        tong = x + y + nho;
        nho = tong/10;
        c = char(tong%10 + 48) + c;
    }
    if(nho > 0) c = '1' + c;
    return (c);
}