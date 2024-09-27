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


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string x;
    cin >> x;
    for(int j = 0;j<k;j++){
        for(int i = 0;i<x.size()-1;i++){
            if(x[i] == 'B' && x[i+1] == 'G'){
                swap(x[i], x[i+1]);
                i++;
            }
        }
    }
    cout << x << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int temp;
    int odd;
    cin >> temp;
    if(temp % 2 == 0){
        odd = 0;
    }else{
        odd = 1;
    }
    int flag = 0;
    int ans = 1;
    for(int i = 1;i < n;i++){
        cin >> temp;
        if((temp % 2 == 0 && odd) || (temp % 2 != 0 && !odd)){
            if(flag == 1){
                cout << 1 << endl;
                return 0;
            }
            flag = 1;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> groups;
    int mini = 0;
    groups.resize(n);
    for(int i = 0;i<n;i++){
        cin >> groups[i];
    }
    sort(groups.begin(), groups.end());
    int x=groups.size()-1;
    int y=0;
    while(x>=y){
        if(x>y && groups[x] == 4){
            x--;
            mini++;
        }else if(x>y && groups[y] == 4){
            y++;
            mini++;
        }else if(x>y && groups[x]+groups[y] == 4){
            x--;
            y++;
            mini++;
        }else if(x>y && groups[x]+groups[y] >= 4){
            if(groups[x] >= groups[y]){
                x--;
                mini++;
            }else{
                y++;
                mini++;
            }
        }else if(x-1>y && groups[x]+groups[y] <= 4){
            groups[x] += groups[y];
            y++;
        }else if(x-1 == y && groups[x]+groups[y] <= 4){
            mini++;
            break;
        }else if(x == y){
            x--;
            mini++;
        }
    }
    cout << mini << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(m * a < b){
        cout << n * a << endl;
        return 0;
    }
    cout << min((((n / m)*b) + (n%m * a)), ((n / m)*b) + b) << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    const int max_val = 100000;
    vector<long long> count(max_val + 1, 0);
    for (int num : a) {
        count[num]++;
    }

    vector<long long> dp(max_val + 1, 0);
    dp[1] = count[1] * 1;

    for (int i = 2; i <= max_val; ++i) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * count[i]);
    }

    cout << dp[max_val] << endl;

    return 0;
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int flag = 0;
    for(int i = 0; i< n;i++){
        cin >> x;
        if(x == 1 && !flag){
            cout << "HARD" << endl;
            flag = 1;
        }
    }
    if(!flag){
        cout << "EASY" << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int lucky_nos[] = {4, 7, 47, 74, 44, 77, 444, 777, 477, 447,474, 774, 747, 774};
    for(int i = 0;i < sizeof(lucky_nos)/sizeof(lucky_nos[0]);i++){
        if(n%lucky_nos[i] == 0){
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
    int n;
    cin >> n;
    int p, q;
    int count = 0;
    for(int i = 0;i < n; i++){
        cin >> p >> q;
        if(q - p >= 2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n, k;
    cin >> n >> k;
    int rem;
    if((n%2 == 0 && k <= n/2) || (n%2 != 0 && k <= n/2 + 1)){
        cout << (k * 2) - 1 << endl;
        return 0;
    }else{
        if(n%2 == 0){
            k = k - n/2;
        }else{
            k = k - ((n/2)+1);
        }
        cout << k * 2 << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int comp(int a, int b){
    return a > b;
}
int main(){
    int n;
    cin >> n;
    vector<int> coins;
    coins.resize(n);
    for(int i  =0; i < n;i++){
        cin >> coins[i];
    }
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    sort(coins.begin(), coins.end(), comp);
    int summ = accumulate(coins.begin(), coins.end(), 0);
    int total = 0;
    for(int i =0;i < n;i++){
        total += coins[i];
        if(total > summ/2){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int no = x;
    int count = 1;
    for(int i = 1; i < n;i++){
        cin >> x;
        if(x == no){
            continue;
        }else{
            no = x;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int total = 0;
    if(n % 2 == 0){
        total = n/2;
    }else
    {
        total = ((n-1)/2) - n;
    }
    cout << total << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> frnds;
    frnds.resize(n+1);
    int x;
    for(int i = 0;i<n;i++){
        cin >> x;
        frnds[x] = i+1;
    }
    for(int i = 1;i<=n;i++){
        cout << frnds[i] << " ";
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int total = 0;
    for(int i = 0; i< n;i++){
        cin >> x;
        total+=x;
    }
    cout << total / (float)n << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string x, y;
    string z = "";
    cin >> x >> y;
    for(int i = 0;i<x.size();i++){
        if(x[i] == y[i]){
            z+="0";
        }else{
            z+="1";
        }
    }
    cout << z << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    for(int i = 0; i<x.size();i++){
        if(x[i]=='Q' || x[i] == 'H' || x[i] == '9'){
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
    int n;
    cin >>n;
    vector<int> x;
    x.resize(n);
    for(int i = 0;i < n;i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    for(int i =0; i<n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int maxi = 0;
    if(x * y * z > maxi){
        maxi = x * y * z;
    }
    
    if(x * (y + z) > maxi){
        maxi = x * (y + z);
    }
    
    if((x + y) * z > maxi){
        maxi = (x + y) * z;
    }
    
    if((x * y) + z > maxi){
        maxi = (x * y) + z;
    }
    
    if(x + (y * z) > maxi){
        maxi = x + (y * z);
    }
    
    if(x + y + z > maxi){
        maxi = x + y + z;
    }

    cout << maxi << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int maxmaxi = 0;
    int maxi = 0;
    int prev = 0;
    for(int i = 0;i<n;i++){
        cin >> x;
        if(prev <= x){
            prev = x;
            maxi++;
        }else{
            maxi = 1;
            prev = x;
        }
        if(maxi > maxmaxi){
            maxmaxi = maxi;
        }
    }
    cout << maxmaxi << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int x, y, z, a;
    cin >> x >> y >> z >> a;
    unordered_map<int, int> test;
    test[x] = 1;
    int count = 0;
    if(test.find(y) == test.end()){
        test[y] = 1;
    }else{
        count++;
    }
    if(test.find(z) == test.end()){
        test[z] =1;
    }else{
        count++;
    }
    if(test.find(a) == test.end()){
        test[a] =1;
    }else{
        count++;
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    for(int i = 1;i<x.size();i++){
        if(x[i] != toupper(x[i])){
            cout << x << endl;
            return 0;
        }
    }
    if(x[0] == toupper(x[0])){
        x[0] = tolower(x[0]);
    }else{
        x[0] = toupper(x[0]);
    }
    for(int i = 1;i<x.size();i++){
        x[i] = tolower(x[i]);
    }
    cout << x << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    string y = "";
    cin >> x;
    int flag = 0;
    int i = 0;
    for(i = 0;i<x.size();i++){
        if(i+2 < x.size() && x[i] == 'W' && x[i+1] == 'U' && x[i+2] == 'B'){
            i = i+2;
            if(flag == 1){
                y+=' ';
                flag = 0;
            }
        }else{
            y+=x[i];
            flag = 1;
        }
    }
    cout << y << endl;
    return 0;
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    string x = "I hate ";
    for(int i = 1;i<n;i++){
        if(i%2==1){
            x += "that I love ";
        }else{
            x += "that I hate ";
        }
    }
    x += "it";
    cout << x << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> x;
    int y, z;
    for(int i = 0; i<n;i++){
        cin >> y >> z;
        x[y] = z;
    }
    auto k = x.begin();
    int start = k->second;
    for(auto i = x.begin(); i!=x.end();i++){
        if(start > i->second){
            cout << "Happy Alex" << endl;
            return 0;
        }
        start = i->second;
    }
    cout << "Poor Alex" << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if(a % b == 0){
            cout << 0 << endl;
        }else{
            cout << (((a/b) + 1) * b) - a << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> x;
    int k;
    int p, q;
    cin >> p;
    for(int i = 0;i<p;i++){
        cin >> k;
        x[k] = 1;
    }
    cin >> q;
    for(int i = 0;i<q;i++){
        cin >> k;
        x[k] = 1;
    }
    for(int i = 1;i<=n;i++){
        if(x.find(i)==x.end()){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    string x;
    cin >> x;
    string s = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, int> mapper;
    for(int i = 0;i<x.size();i++){
        mapper[tolower(x[i])] = 1;
    }
    for(int i=0;i<s.size();i++){
        if(mapper.find(tolower(s[i]))==mapper.end()){
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
    int n;
    cin >> n;
    int x;
    cin >> x;
    int maxi = x;
    int mini = x;
    int max_pos = 0, min_pos = 0;
    vector<int> temp;
    temp.resize(n);
    temp[0] =x;
    int y = x;
    for(int i=1;i<n;i++){
        cin >> y;
            temp[i] = y;
        if(y > maxi){
            maxi = y;
            max_pos = i;
        }
        if(y <= mini){
            mini = y;
            min_pos = i;
        }
    }
    int count = 0;
    if(min_pos < max_pos){
        count = (max_pos) + (n - min_pos - 1) - 1;
    }else{
        count = (max_pos) + (n - min_pos - 1);
    }
    cout << count << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    map<int, int> x;
    for(int i = k; i <= d;i=i+k){
        x[i] = 1;
    }
    for(int i = l; i <= d;i=i+l){
        x[i] = 1;
    }
    for(int i = m; i <= d;i=i+m){
        x[i] = 1;
    }
    for(int i = n; i <= d;i=i+n){
        x[i] = 1;
    }
    for(int i = 1;i<=d;i++){
        if(x.find(i) != x.end()){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int huns = n / 100;
    int twen = (n % 100) / 20;
    int ten = ((n % 100) % 20) / 10;
    int five = (((n % 100) % 20) % 10) / 5;
    int one = (((n % 100) % 20) % 10) % 5;
    cout << huns + twen + ten + five + one << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    int n = x.size();
    vector<int> prefix(n, 0);

    for (int i = 1; i < n; i++) {
        int j = prefix[i - 1];
        while (j > 0 && x[i] != x[j]) {
            j = prefix[j - 1];
        }
        if (x[i] == x[j]) {
            j++;
        }
        prefix[i] = j;
    }

    int len = prefix[n - 1];
    if (len > 0 && len > n/2) {
        if (x[n-1] == x[len - 1]) {
            cout << "YES" << endl;
            cout << x.substr(0, len) << endl;
        }else{
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<string, int> x;
    string y;
    for(int i = 0;i<n;i++){
        cin >> y;
        if(x.find(y) != x.end()){
            cout << y << x[y] << endl;
            x[y]++;
        }else{
            x[y] = 1;
            cout << "OK" <<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> x;
    x.resize(k);
    for(int i = 0; i<k;i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int min = x[k-1] - x[0];
    int j = 0;
    for(int i = n-1; i<k;i++){
        if(x[i] - x[j] < min){
            min = x[i] - x[j];
        }
        j++;
    }
    cout << min << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int s, n;
    cin >> s >> n;
    multimap<int, int>x;
    int a, b;
    for(int i =0;i < n;i++){
        cin >> a >> b;
        x.insert({a, b});
    }
    for(auto i = x.begin();i!=x.end();i++){
        if(i->first < s){
            s+=i->second;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, len;
    cin >> n >> len;
    std::cout << fixed;
    vector<long long int> x;
    x.resize(n);
    for(int i = 0;i<n;i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    double min = 0;
    min = (x[0] - 0);
    for(int i = 0;i<n-1;i++){
        if(min < (x[i+1] - x[i]) / 2.0){
            min = (x[i+1] - x[i]) / 2.0;
        }
    }
    min = min < (len - x[n-1]) ? (len - x[n-1]) : min;
    cout << setprecision(6) <<  min << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
int main(){
    long long int n;
    cin >> n;
    long long int a;
    while(n--){
        cin >> a;
        long long sqrtA = sqrt(a);
        if (sqrtA * sqrtA == a) {
            if (isPrime(sqrtA)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >> x;
    int i =0;
    for(i = 0;i<x.size();i++){
        if(x[i] == '.'){
            cout << 0;
        }else if(x[i] == '-' && x[i+1] == '.'){
            cout << 1;
            i++;
        }else{
            cout << 2;
            i++;
        }
    }
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    getline(cin, x);
    map<char, int> y;
    for(int i = 1;i<x.size()-1;i=i+3){
        y[x[i]] = 1;
    }
    cout << y.size() << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> x; 
    vector<int> y;
    y.resize(n);
    int k, l;
    for(int i = 0;i < n;i++){
        cin >> k >> l;
        y[i] = k;
        if(x.find(l)==x.end()){
            x[l] = 1;
        }else{
            x[l]++;
        }
    }
    int count = 0;
    for(int i = 0;i < n;i++){
        if(x.find(y[i])!=x.end()){
            count+=x[y[i]];
        }
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n == 0 || n == 1 || n == 2){
            cout << 0 << endl;
            continue;
        }
        if(n%2 == 0){
            cout << ( n / 2 ) - 1 << endl;
        }else{
            cout  << n / 2 << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int flag = 0;
    for(int i=1;i<=n;i++){
        if(i % 2 == 1){
            for(int j = 0;j<m;j++){
                cout << "#";
            }
            cout << endl;
        }else if(i % 2 == 0 && flag == 0){
            for(int j = 0;j<m-1;j++){
                cout << ".";
            }
            cout << "#" << endl;
            flag = 1;
        }else if(i % 2 == 0 && flag == 1){
            cout << "#";
            for(int j = 0;j<m-1;j++){
                cout << ".";
            }
            cout << endl;
            flag = 0;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    string x, y, z;
    cin >> x >> y >> z;
    map<char, int> count;
    for(int i = 0;i<x.size();i++){
        if(count.find(x[i])==count.end()){
            count[x[i]] = 1;
        }else{
            count[x[i]]++;
        }
    }

    for(int i = 0;i<y.size();i++){
        if(count.find(y[i])==count.end()){
            count[y[i]] = 1;
        }else{
            count[y[i]]++;
        }
    }

    if(x.size() + y.size() != z.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0;i<z.size();i++){
        if(count.find(z[i])==count.end()){
            cout << "NO" << endl;
            return 0;
        }else{
            count[z[i]]--;
        }
    }
    for(int i = 0;i<x.size();i++){
        if(count[x[i]]!=0){
            cout << "NO" << endl;
            return 0;
        }
    }
    for(int i = 0;i<y.size();i++){
        if(count[y[i]]!=0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int count = 0;
        int ten = 1;
        vector<int> p;
        while(x>0){
            int rem = x % 10;
            if(rem != 0){
                p.push_back(rem*ten);
                count++;
            }
            ten *= 10;
            x = x/10;
        }
        cout << count << endl;
        for(int i = count-1;i>=0;i--){
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    int total_police = 0;
    int escape = 0;
    for(int i = 0;i<n;i++){
        cin >> x;
        if(x != -1){
            total_police += x;
        }
        if(x == -1 && total_police <= 0){
            escape++;
        }
        if(x == -1 && total_police > 0){
            total_police--;
        }
    }
    cout << escape << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int n, m;
    cin >> n >> m;
    long long int x;
    long long int present = 1;
    long long int total_count = 0;
    for(long long int i=0;i<m;i++){
        cin >> x;
        if(x >= present){
            total_count += x - present;
            present = x;
        }else if(x < present){
            total_count += ((n - present) + x);
            present = x;
        }
    }
    cout << total_count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's'){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    if(min(n, m) % 2 == 0){
        cout << "Malvika" << endl;
    }else{
        cout << "Akshat" << endl;
    }
    return 0;
}




#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 1;
    int y = 0;
    string z, a, b;
    cin >> z;
    for(int i = 1;i<n;i++){
        cin >> a;
        if(z == a){
            x++;
        }else{
            b = a;
            y++;
        }
    }
    if(x > y){
        cout << z << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        long long int x, y;
        cin >> x >> y;
        int count = 0;
        int z;
        while(x > 0 && y >0){
            if(x == y){
                z = x;
                x = x - y;
                y = y - z;
                count++;
            }else if(x > y){
                count+=(x /y);
                x = x - ((x / y) * y);
            }else if(x < y){
                count+=(y/x);
                y = y - ((y / x) * x);
            }
        }
        cout << count << endl;
    }
    return 0;
}

    #include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            long long int n, m;
            cin >> n >> m;
            long long int p;
            vector<long long int> x(n);
            for(long long int i = 0;i<n;i++){
                cin >> x[i];
            }
            sort(x.begin(), x.end());
            long long int y = 0;
            for(long long int i = 0;i<m;i++){
                cin >> p;
                x[0] = p;
                sort(x.begin(), x.end());
            }
            for(long long int i = 0;i<n;i++){
                y += x[i];
            }
            cout << y << endl;
        }
        return 0;
    }


#include <bits/stdc++.h>

using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if((x > y && y > z) || (x < y  && y< z)){
        cout << abs(y-x) + abs(z-y) << endl;
    }else if((y > x && x > z) || (y < x && x < z)){
        cout << abs(x-y) + abs(z-x) << endl;
    }else{
        cout << abs(z-y) + abs(z-x) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int rem = 240 - k;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(rem - (5 * i) >= 0){
            count++;
            rem = rem - (5*i);
        }
    }
    cout << count << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int p;
    cin  >> p;
    int max = p;
    int min = p;
    int count =0;
    for(int i =1;i<n;i++){
        cin >> p;
        if(p > max){
            max = p;
            count++;
        }
        if(p < min){
            min = p;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int t;
        cin >> t;
        if(t >= 102 && t < 110){
            cout << "YES" << endl;
        }else if(t >= 1010 && t < 1100){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int slimes = (k*l)/nl;
    int slimes2 = c * d;
    int slimes3 = p/np;
    cout << min(min(slimes, slimes2), slimes3)/n << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string x;
        cin >> x;
        int count = 0;
        for(int i =0;i<n;i++){
            if(x[i] == '('){
                count+=1;
            }
        }
        cout << n/2+(count*2) << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        map<long long int, long long int> x;
        long long int count = 0;
        long long int p;
        for(long long int j = 1; j<=n;j++){
            cin >> p;
            count+=x[p-j];
            x[p-j]++;
        }
        cout << count << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a < b && b < c){
            cout << "STAIR" << endl;
        }else if(a < b && b > c){
            cout << "PEAK" << endl;
        }else{
            cout << "NONE" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin  >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n;j++){
                if((j%2==0 && i % 2 == 0) || (i % 2 !=0 && j % 2 != 0)){
                    cout << "##";
                }else{
                    cout << "..";
                }
            }
            cout << endl;
            for(int j = 0; j < n;j++){
                if((j%2==0 && i % 2 == 0) || (i % 2 !=0 && j % 2 != 0)){
                    cout << "##";
                }else{
                    cout << "..";
                }
            }
            cout << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int req = 0;
        int num = ((x[0] - '0') * 10) +  (x[1] - '0');
        if(num != (num % 12)){
            req = 1;
            num = num % 12;
        }
        if(num!= 0 && req == 0){
            cout << x << " AM" << endl;
        }else if(num== 0 && req == 0){
            cout << "12:" << x[3] << x[4] << " AM" << endl;
        }else{
            if(num == 0){
                num = 12;
            }
            if(num < 10){
                cout << "0" << num << ":" << x[3] << x[4] << " PM" << endl;
            }else{
                cout << num << ":" << x[3] << x[4] << " PM" << endl;
            }
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    if(max(a, b) - min(a, b) > 1){
        cout << (max(a, b) - min(a, b)) / 2 << endl; 
    }else{
        cout << 0 << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b == c || b+c == a || a+c == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if((a + b) % 2 == 0){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl; 
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char x;
        int count = 0;
        for(int i = 0;i<n;i++){
            cin >> x;
            if(x == '+'){
                count++;
            }else{
                count--;
            }
        }
        cout << abs(count) << endl;
    }
}


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = INT_MAX, b = INT_MAX;
        int x;
        int count = 0;
        for(int i = 0;i<n;i++){
            cin >> x;
            if(a > b){
                swap(a, b);
            }
            if(x <= a){
                a = x;
            }else if(x <= b){
                b = x;
            }else{
                count++;
                a = x;
            }
        }
        cout << count << endl;
    }
    return 0;
}