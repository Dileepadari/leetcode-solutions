#include <bits/stdc++.h>

int main(){
    int n;
    int count = 0;
    std::cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        std::cin >> a >> b >> c;
        if(a+b+c >= 2)
            count++;
        }
    printf("%d\n", count);
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int a, b, c, d, e;
    std::cin >> a >> b >> c;
    if(a%c == 0){
        d = a/c;
    }else{
        d = (a/c) + 1;
    }
    if(b%c == 0){
        e = b/c;
    }else{
        e = (b/c) + 1;
    }

    int no_of_stones = (d*e);
    printf("%d\n", no_of_stones);
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int n;
    std::string x;
    int count = 0;
    std::cin >> n;
    for(int i = 0; i < n;i++){
        std::cin >> x;
        if(x[1] && x[1] == '+'){
            count++;
        }
        else if(x[1] && x[1] == '-'){
            count--;
        }
    }
    printf("%d\n", count);
}

#include <bits/stdc++.h>

int main(){
    int n, k, x, y=0;
    std::cin >> n >> k;
    int count = 0;
    for(int i = 0;i<n;i++){
        std::cin >> x;
        if(i == k-1){
            y = x;
        }
        if(x <= 0){
            break;
        }else if(i>=k && x != y){
            break;
        }
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int M, N;
    std::cin >> M >> N;
    printf("%d\n", (M*N)/2);
    return 0;
}


#include <bits/stdc++.h>

int main(){
    int x, count = 0;
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 5;j++){
            std::cin >> x;
            if(x == 1){
                if(i >= 2){
                    count += (i-2);
                }
                else{
                    count += (2-i);
                }
                if(j >= 2){
                    count += (j-2);
                }
                else{
                    count += (2-j);
                }
                std::cout << count << std::endl;
            }
        }
    }
}

#include <bits/stdc++.h>

int main(){
    std::string x, y;
    std::cin >> x >> y;
    for(int i = 0; i < x.size();i++){
        if(tolower(x[i]) == tolower(y[i])){
            continue;
        }else if(tolower(x[i]) < tolower(y[i])){
            std::cout << -1 << std::endl;
            return 0;
        }else{
            std::cout << 1 << std::endl;
            return 0;
        }
    }
    std::cout << 0 << std::endl;
    return 0;
}

    #include <bits/stdc++.h>

    int main(){
        std::string x;
        std::cin >> x;
        std::sort(x.begin(), x.end());
        for(int i = x.size()/2; i<x.size()-1;i++){
            std::cout << x[i] << '+';
        }
        std::cout << x[x.size() - 1] << std::endl;
        return 0;
    }

#include <bits/stdc++.h>

int main(){
    std::string x;
    std::cin >> x;
    x[0] = toupper(x[0]);
    std::cout << x << std::endl;
}

#include <bits/stdc++.h>

int main(){
    std::string x;
    std::cin >> x;
    std::sort(x.begin(), x.end());
    char temp = x[0];
    int count = 1;
    for(int i = 1;i < x.size(); i++){
        if(x[i]!=temp){
            count++;
            temp = x[i];
        }
    }
    if(count % 2== 0){
        std::cout << "CHAT WITH HER!" << std::endl;
    }else{
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int a, b;
    std::cin >> a >> b;
    int count = 0;
    while(a<=b){
        a = a*3;
        b = b*2;
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}

#include <bits/stdc++.h>

int main(){
    std::string x;
    std::cin >> x;
    if((char)tolower(x[0]) == 'a' || (char)tolower(x[0]) == 'e' || (char)tolower(x[0]) == 'i' || (char)tolower(x[0]) == 'o' || (char)tolower(x[0]) == 'u' || (char)tolower(x[0]) == 'y'){
    }
    else{
        std::cout << '.' << (char)tolower(x[0]);
    }
    for(int i = 1; i < x.size(); i++){
        if((char)tolower(x[i]) == 'a' || (char)tolower(x[i]) == 'e' || (char)tolower(x[i]) == 'i' || (char)tolower(x[i]) == 'o' || (char)tolower(x[i]) == 'u' || (char)tolower(x[i]) == 'y'){
        }else{
            std::cout << '.' << (char)tolower(x[i]);
        }
    }
    std::cout << std::endl;
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    char stri[n];
    std::cin >> stri;
    int count=0;
    char temp = stri[0];
    for(int i = 1; i < n;i++){
        if(stri[i] == temp){
            count++;
        }else{
            temp = stri[i];
        }
    }
    std::cout << count << std::endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    int temp = x[0];
    int count = 1;
    for(auto y: x){
        if(y == temp){
            count++;
        }else{
            temp =  y;
            count = 1;
        }
        if(count >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    if(n % 5 == 0){
        std::cout << n /5 << std::endl;
    }
    else{
        std::cout << (n /5) + 1 << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h>

int main(){
    int k, total, req;
    std::cin >> k >> total >> req;
    int amount = k * ((req * (req + 1)) /2);
    int ans = (amount - total) > 0 ? amount - total : 0;
    std::cout <<  ans << std::endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    int low_count = 0;
    for(int i = 0;i < x.size();i++){
        if(x[i] >= 'a' && x[i] <= 'z'){
            low_count++;
        }
    }
    if((x.size() % 2 == 0 && x.size() / 2 <= low_count) || (x.size() % 2 == 1 && x.size() / 2 < low_count)){
        for(int i = 0;i < x.size();i++){
            cout << (char)tolower(x[i]);
        }
    }else{
        for(int i = 0;i < x.size();i++){
            cout << (char)toupper(x[i]);
        }
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    int start = x.size() / 2 + 1;
    for(int i = start;i < x.size();i++){
        if(x.substr(0, i) == x.substr(x.size() - i, x.size() - 1)){
            cout << "YES" << endl;
            cout << x.substr(0, i) << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n, k;
    cin >> n >> k;
    for(long long int i = 0; i< k;i++){
        if(n % 10 == 0){
            n = n /10;
        }else{
            n = n-1;
        }
    }
    cout << n << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, z;
    int x_t = 0;
    int y_t = 0;
    int z_t = 0;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> x >> y >> z;
        x_t += x;
        y_t += y;
        z_t += z;
    }
    if(x_t == 0 && y_t == 0 && z_t == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n;
    cin >> n;
    int count = 0;
    while(n > 0){
        if(n % 10 == 4 || n % 10 == 7){
            count++;
        }
        n = n / 10;
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string x;
    cin >> x;
    int A = 0, D = 0;
    for(int i=0; i < x.size();i++){
        if(x[i] == 'A'){
            A++;
        }else{
            D++;
        }
    }
    if(A==D){
        cout << "Friendship" << endl;
    }else if(A > D){
        cout << "Anton" << endl;
    }else{
        cout << "Danik" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    string x, y;
    cin >> x;
    cin >> y;
    if(x.size() != y.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < x.size();i++){
        if(x[i] != y[x.size() - (i+1)]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    int m;
    int val;
    long long int total = 0;
    while(t--){
        cin >> m;
        total = 0;
        for(int i=0; i< m;i++){
            cin >> val;
            if(i % 2 == 0){
                total+=val;
            }else{
                total-=val;
            }
        }
        cout << total << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int a=0, b=0, c=0;
    int x, y;
    cin >> x >> y;
    if(x == 1 || y == 1){
        a = 1;
    }
    if(x == 2 || y == 2){
        b = 1;
    }else{
        c = 1;
    }
    if(a == 0){
        cout << 1 << endl;
    }else if(b ==0){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a+b == 3){
        cout << 3 << endl;
    }else if(a + b == 5){
        cout << 1 << endl;
    }else if(a+b == 4){
        cout << 2 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    long long int total = 0;
    long long int max = 0;
    int g, l;
    for(int i = 0; i< n; i++){
        cin >> l >> g;
        total = total - l;
        total = total + g;
        if(total >= max){
            max = total;
        }
    }
    cout << max << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, h;
    cin >> n >> h;
    int p;
    int total = 0;
    for(int i = 0; i<n;i++){
        cin >> p;
        if(p > h){
            total = total + 2;
        }else{
            total = total + 1;
        }
    }
    cout << total << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = n+1;;i++){
        int arr[10] = {0};
        int m = i;
        int flag = 1;
        while(m > 0){
            if(arr[m%10] !=0){
                flag = 0;
                break;
            }
            arr[m%10] =1;
            m = m /10;
        }
        if(flag){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.size() < 5){
        cout << "NO" << endl;
        return 0;
    }
    string hel = "hello";
    int j =0;
    for(int i = 0; i<s.size();i++){
        if(s[i] == hel[j]){
            j++;
        }
        if(j == 5){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num_cells, num_teachers, num_queries;
        cin >> num_cells >> num_teachers >> num_queries;

        int pos1, pos2;
        cin >> pos1 >> pos2;

        int dav_pos;
        cin >> dav_pos;

        if(abs(pos1 - dav_pos) < abs(pos2 -dav_pos)){
            cout << abs(pos1 - dav_pos) << endl;
        }else{
            cout << abs(pos2 - dav_pos) << endl;
        }
    }
    return 0;
}