// codeforces Contest 972 (Div2)

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;

    string v = "aeiou";

    while(t--){
        int n;
        cin >>n;
        string result;
        for (int i = 0; i < 5; ++i) {
            int r = n / 5 + (i < n % 5);
            result.append(r, v[i]);
        }        cout << result << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num_cells, num_teach, num_queries;
        cin >> num_cells >> num_teach >> num_queries;
        int pos1, pos2;
        cin >> pos1 >> pos2;
        int dav_pos;
        cin >> dav_pos;
        int min_pos = min(pos1, pos2);
        int max_pos = max(pos1, pos2);
        int mid = (pos1 + pos2) / 2;
        if(dav_pos < min_pos){
            cout << min_pos - 1 << endl;
        }else if(dav_pos > max_pos){
            cout << num_cells - max_pos << endl;
        }else{
            cout << min(abs(mid - pos1), abs(mid - pos2)) << endl;
        }
    }
    return 0;
}

// for single query
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
    using vi = vector<int>;
    int n, m, q;
    cin >> n >> m >> q;

    vi v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }

        sort(v.begin(), v.end());

        int pos;
        cin >> pos;

        if (pos < v[0]) {
            cout << v[0] - 1 << endl;
        } else if (pos > v.back()) {
            cout << n - v.back() << endl;
        } else {
            auto it = upper_bound(v.begin(), v.end(), pos);
            auto it2 = it - 1;
            int midVal = (*it + *it2) / 2;
            cout << min(abs(midVal - *it), abs(midVal - *it2)) << endl;
        }
    }

    return 0;
}

// rated 432

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int num_cells, num_teach, num_queries;
    cin >> t;
    while (t--) {
        cin >> num_cells >> num_teach >> num_queries;
        vector<int> teach;
        teach.resize(num_teach);
        for (int i = 0; i < num_teach; ++i) {
            cin >> teach[i];
        }
        sort(teach.begin(), teach.end());
        while (num_queries--)
        {
            int dav_pos;
            cin >> dav_pos;
            if (dav_pos < teach[0]) {
                cout << teach[0] - 1 << endl;
            } else if (dav_pos > teach.back()) {
                cout << num_cells - teach.back() << endl;
            } else {
                auto val1 = upper_bound(teach.begin(), teach.end(), dav_pos);
                auto val2 = val1 - 1;
                int mid = (*val1 + *val2) / 2;
                cout << min(abs(mid - *val1), abs(mid - *val2)) << endl;
            }
        }
    }

    return 0;
}

// Codeforces 973 (Div 2)

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , x, y;
        cin >> n >> x >> y;
        int mini = min(x, y);
        cout << (n+mini-1)/mini << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int t;
    long long int n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long int> rating;
        rating.resize(n);
        long long int total = 0;
        for(long long int i = 0; i< n; i++){
            cin >> rating[i];
            if(i + 2 < n){
                total = total + rating[i];
            }
        }
        long long int r2 = rating[n-2] - total;
        long long int r3 = rating[n-1] - r2;
        cout << r3 << endl;
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

bool query(const string& s) {
    cout << "? " << s << endl;
    cout.flush(); // Flush the output buffer to ensure immediate output
    int response;
    cin >> response; // Read the response from the judge/system
    return response == 1;
}

void solve(string s, int n) {
    string ans = s;
    int back = 0;
    for (int i = 0; i < n - 2; i++) {
        string s1 = ans + "0";
        string s2 = ans + "1";
        if(back == 0){
            if (query(s1)) {
                ans = s1;
            } else if(query(s2)){
                ans = s2;
            }else{
                back = 1;
            }
        }

        if(back == 1){
            string a1 = "0" + ans;
            string a2 = "1" + ans;
            if (query(a1)) {
                ans = a1;
            }else{
                ans = a2;
            }
        }
    }

    cout << "! " << ans << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if(n == 1){
            if(query("1")){
                cout << "! 1" << endl;
            }else{
                cout << "! 0" << endl;
            }
            cout.flush();
            continue;
        }
        if(query("00")){
            solve("00", n);
        }else if(query("01")){
            solve("01", n);
        }
        else if(query("10")){
            solve("10", n);
        }
        else {
            string ans = "";
            for (int i = 0; i < n; i++) {
                ans += '1';
            }
            cout << "! " << ans << endl;
            cout.flush();
        }
    }
    return 0;
}

// Codeforces contest 974 (Div 3)

#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> gold(n);
        for (int i = 0; i < n; i++) {
            cin >> gold[i];
        }

        int total_received = 0;
        int robin_gold = 0;

        for (int i = 0; i < n; i++) {
            if (gold[i] >= k) {
                robin_gold += gold[i]; // Robin takes gold if above threshold
            }else if(gold[i] == 0 && robin_gold > 0){
                if(robin_gold > 0){
                    robin_gold--;
                    total_received++;
                }
            }
        }

        cout << total_received << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, x;
        cin >> n >> x;
        long long int count = (x * (x+1)) /2 + (n - x) * x;

        if(x >= n){
            count = n * (n+1) /2;
        }
        if(count % 2 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> wealth(n);
        long long int total = 0;
        for (auto &ind_w : wealth) {
            cin >> ind_w;
            total += ind_w;
        }

        sort(wealth.begin(), wealth.end());
        long long int no_thres = (n / 2) + 1;
        if (no_thres > n - 1) {
            cout << "-1\n";
            continue;
        }
        long long int med = wealth[no_thres - 1];
        long long int min_extra = max(2 * n * med - total + 1, 0LL);
        long long int new_total = total + min_extra;
        double half_average = static_cast<double>(new_total) / (2.0 * n);
        int high_index = n - 1;
        while (high_index > 0 && wealth[high_index - 1] == wealth[n - 1]) {
            high_index--;
        }
        vector<long long int> new_wealth = wealth;
        new_wealth[high_index] += min_extra;
        long long int no_count = 0;
        for (const auto &w : new_wealth) {
            if (w < half_average) {
                no_count++;
            }
        }
        if (no_count >= no_thres) {
            cout << min_extra << "\n";
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n, d, k;
        cin >> n >> d >> k;

        vector<pair<long long int, long long int>> scheds(k);
        for (int i = 0; i < k; i++) {
            cin >> scheds[i].first >> scheds[i].second;
        }
        if (n < d) {
            cout << "1 1" << endl;
            continue;
        }

        long long int max_start = n - d + 1;
        vector<int> days(max_start + 2, 0);

        for (const auto& job : scheds) {
            long long int start = max(1LL, job.first - d + 1);
            long long int end = min(job.second, max_start);

            if (start <= end) {
                days[start]++;
                days[end + 1]--;
            }
        }

        vector<int> o_count(max_start + 1, 0);
        int current = 0;
        for (long long int i = 1; i <= max_start; i++) {
            current += days[i];
            o_count[i] = current;
        }

        long long int max_oday = 1, min_oday = 1;
        int max_o = INT_MIN, min_o = INT_MAX;

        for (long long int i = 1; i <= max_start; i++) {
            if (o_count[i] > max_o) {
                max_o = o_count[i];
                max_oday = i;
            }
            if (o_count[i] < min_o) {
                min_o = o_count[i];
                min_oday = i;
            }
        }
        cout << max_oday << " " << min_oday << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
const long long int MAX_VAL = numeric_limits<long long int>::max() / 2;

struct graph_struct {
    int dest;
    long long int dur;
    graph_struct(int d, long long int t) : dest(d), dur(t) {}
};

vector<long long int> cal_short_times(int start, int n, const vector<vector<graph_struct> >& graph, const vector<bool>& points) {
    vector<vector<long long int> > total_time(n + 1, vector<long long int>(2, MAX_VAL));
    priority_queue<pair<long long int, pair<int, int> >, vector<pair<long long int, pair<int, int> > >, greater<pair<long long int, pair<int, int> > > > nextnode;

    total_time[start][0] = 0;
    nextnode.push(make_pair(0, make_pair(start, 0)));

    while (!nextnode.empty()) {
        long long int attime = nextnode.top().first;
        int atvertex = nextnode.top().second.first;
        int status = nextnode.top().second.second;
        nextnode.pop();

        if (attime > total_time[atvertex][status]) continue;

        if (status == 0 && points[atvertex]) {
            if (attime < total_time[atvertex][1]) {
                total_time[atvertex][1] = attime;
                nextnode.push(make_pair(attime, make_pair(atvertex, 1)));
            }
        }

        for (size_t i = 0; i < graph[atvertex].size(); ++i) {
            const graph_struct& conn = graph[atvertex][i];
            int nextV = conn.dest;
            long long int tt = status == 0 ? conn.dur : conn.dur / 2;
            long long int comingtime = attime + tt;
            if (comingtime < total_time[nextV][status]) {
                total_time[nextV][status] = comingtime;
                nextnode.push(make_pair(comingtime, make_pair(nextV, status)));
            }
        }
    }

    vector<long long int> high_times(n + 1, MAX_VAL);
    for (int v = 1; v <= n; ++v) {
        high_times[v] = min(total_time[v][0], total_time[v][1]);
    }
    return high_times;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<bool> points(n + 1, false);
        for (int i = 0; i < h; ++i) {
            int vert;
            cin >> vert;
            points[vert] = true;
        }

        vector<vector<graph_struct> > graph(n + 1);
        for (int i = 0; i < m; ++i) {
            int from, to;
            long long int time;
            cin >> from >> to >> time;
            graph[from].push_back(graph_struct(to, time));
            graph[to].push_back(graph_struct(from, time));
        }
        vector<long long int> mtimes = cal_short_times(1, n, graph, points);
        vector<long long int> rtimes = cal_short_times(n, n, graph, points);

        long long int min_meet = MAX_VAL;
        for (int v = 1; v <= n; ++v) {
            if (mtimes[v] < MAX_VAL && rtimes[v] < MAX_VAL) {
                min_meet = min(min_meet, max(mtimes[v], rtimes[v]));
            }
        }

        if (min_meet < MAX_VAL) {
            cout << min_meet << endl;
        }else{
            cout << -1 << endl;
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
        vector<int> elems;
        elems.resize(n);

        for (int i = 0; i < n; i++) {
            cin >> elems[i];
        }

        int maxi = 0;
        int elem_count = 0;
        for (int i = 0; i < n; i=i+2) {
            if (elems[i] > maxi) {
                maxi = elems[i];
            }
            elem_count++;
        }

        int zero_index = elem_count + maxi;
        maxi = 0;
        elem_count = 0;
        for (int i = 1; i < n; i=i+2) {
            if (elems[i] > maxi) {
                maxi = elems[i];
            }
            elem_count++;
        }

        int one_index = elem_count + maxi;

        if(one_index > zero_index){
            cout << one_index << endl;
        }else{
            cout << zero_index << endl;
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
        int n, q;
        cin >> n >> q;
        vector<int> points;
        vector<int> queries;
        vector<int> cov_count;
        map<int, int> difference;
        points.resize(n);
        queries.resize(q);
        cov_count.resize(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        for (int i = 0; i < n - 1; i++) {
            difference[points[i]]++;
            difference[points[i+1]]--;
        }

        int curr_coverage = 0;
        int prev_point = -1;
        for(auto &val: difference){
            if(curr_coverage > 0 && curr_coverage <= n){
                cov_count[curr_coverage] = cov_count[curr_coverage] + (val.first - prev_point);
            }
            prev_point = val.first;
            curr_coverage = curr_coverage +  val.second;
        }

        for (int i = 0; i < q; i++) {
            if(queries[i] > n){
                cout << "0 ";
            }else{
                cout << cov_count[queries[i]] << " ";
            }
        }

        cout << endl;

    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

unordered_map<ll, ll> compute_frequency(const vector<ll>& v1, ll n) {
    unordered_map<ll, ll> freq_map;
    for (ll i = 1; i <= n; ++i) {
        ll coverage = (i - 1) * (n - i + 1) + (n - i);
        freq_map[coverage]++;

        if (i < n) {
            ll gap = v1[i] - v1[i - 1] - 1;
            if (gap > 0) {
                ll inBetweenCount = i * (n - i);
                freq_map[inBetweenCount] += gap;
            }
        }
    }
    return freq_map;
}

vector<string> answer_queries(const vector<ll>& v2, const unordered_map<ll, ll>& freq_map) {
    vector<string> results;
    for (const auto& query : v2) {
        results.push_back(to_string(freq_map.count(query) ? freq_map.at(query) : 0));
    }
    return results;
}

string join(const vector<string>& parts, const string& delimiter) {
    string combined;
    for (size_t i = 0; i < parts.size(); ++i) {
        combined += parts[i];
        if (i < parts.size() - 1) {
            combined += delimiter;
        }
    }
    return combined;
}

int main() {

    ll test_cases;
    cin >> test_cases;

    vector<string> final_output;
    while (test_cases--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> v1(n);
        for (ll& element : v1) {
            cin >> element;
        }

        vector<ll> v2(q);
        for (ll& query : v2) {
            cin >> query;
        }

        unordered_map<ll, ll> freq_map = compute_frequency(v1, n);
        vector<string> answers = answer_queries(v2, freq_map);

        final_output.push_back(join(answers, " "));
    }

    cout << join(final_output, "\n") << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, q;
        cin >> n >> q;
        vector<long long int> points;
        vector<long long int> queries;
        unordered_map<long long int, long long int> frequency_map;
        points.resize(n);
        queries.resize(q);

        for (long long int i = 0; i < n; i++) {
            cin >> points[i];
        }

        for (long long int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        for (long long int i = 1; i <= n; i++) {
            long long space =  (i - 1) * (n - i + 1) + (n - i);
            frequency_map[space]++;

            if (i < n) {
                long long distance = points[i] - points[i - 1] - 1;
                if (distance > 0) {
                    frequency_map[i * (n - i)] += distance;
                }
            }
        }

        for (long long int i = 0; i < q; i++) {
            if(frequency_map.find(queries[i]) == frequency_map.end()){
                cout << "0 ";
            }else{
                cout << frequency_map[queries[i]] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        vector<long long int> card_counts;
        card_counts.resize(n);
        for(long long int i = 0; i < n; i++){
            cin >> card_counts[i];
        }

        long long int max_element = 0;
        for(long long int i = 0; i < n; i++){
            if(card_counts[i] > max_element){
                max_element = card_counts[i];
            }
        }
        long long int total_sum = 0;
        for(long long int i = 0; i < n; i++){
            total_sum += card_counts[i];
        }

        for(long long int i = n; i > 0; i--){
            long long int a = (total_sum + k) / i;
            if(!((a * i) + 1 <= total_sum) && !(a + 1 <= max_element)){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<stack<int>> guns;

        for (int i = 0; i < n; ++i)
        {
            bool placed = false;

            for (int j=guns.size()-1;j>=0;j--)
            {
                if (guns[j].top() > a[i])
                {
                    guns[j].push(a[i]);
                    placed = true;
                    break;
                }
            }

            if (!placed)
            {
                stack<int> newGun;
                newGun.push(a[i]);
                guns.push_back(newGun);
            }
        }

        cout << guns.size() << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the minimum operations needed to make all heights equal to the target
long long min_operations_to_equalize(vector<long long> heights, long long target) {
    long long operations = 0;
    for (auto h : heights) {
        while (h != target) {
            if (h > target) {
                if (h / 2 >= target && h / 2 > 0) {
                    h /= 2;
                } else {
                    h -= 1;
                }
            } else {
                h += 1;
            }
            operations++;
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        if (m >= n) {
            cout << 0 << endl;
            continue;
        }

        sort(heights.begin(), heights.end());

        long long min_operations = LLONG_MAX;

        for (int i = 0; i <= m; i++) {
            vector<long long> subset;
            for (int j = 0; j < n - m; j++) {
                subset.push_back(heights[i + j]);
            }

            for(int j = 0; j<subset.size();j++){
                    long long operations = min_operations_to_equalize(subset, subset[j]);
                    min_operations = min(min_operations, operations);
                }
            }

        cout << min_operations << endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> bullets(n);

        for (int i = 0; i < n; i++) {
            cin >> bullets[i];
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (bullets[i] > bullets[i + 1]) {
                bool found = false;
                for (int j = i + 2; j < n; j++) {
                    if (bullets[j] <= bullets[i] && bullets[j] >= bullets[i + 1]) {
                        found = true;
                        break;
                    }
                }
                if(found) {
                    count++;
                }
            }else{
                count++;
            }
        }
        cout << count + 1 << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    long long int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long int count = 0;
        if(k <= 1){
            cout << n << endl;
            continue;
        }

        while(n >= 1){
            count = count + (n % k);
            n = n / k;
        }
        cout << count << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main(){
    long long int t;
    long long int n;
    long long int left;
    long long int right;
    cin >> t;
    while(t--){
        cin >> n;
        left = 1;
        right = 5 * pow(10, 18);
        while(left < right){
            long long int mid = left + (right - left) / 2;
            long long int l = 0, r = mid;
            while(l < r){
                long long int mid2 = l + (r - l + 1) / 2;
                if(mid2 > (mid / mid2)){
                    r = mid2 - 1;
                }else{
                    l = mid2;
                }
            }
            long long int count = mid - l;

            if(count < n){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        cout << left << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int isdec(double x)
{
    if (x - (int)x == 0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cin >> a >> b;
    long long int mul = a * b;
    double p = 10.0;
    for (int i = 0; i < 9; i++)
    {
        if (isdec(mul * p/100.0))
        {
            cout << (mul * (int)p)/100 + 1 << " ";
        }
        else
        {
            cout << (mul * (int)p)/100 << " ";
        }
        p += 10.0;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long int abel = 0;
    if(n < 1){
        return 0;
    }
    cin >> abel;
    long long int s = 0;
    long long int maxi = abel;
    for(int i = 1;i < n;i++){
        cin >> s;
        if(s > maxi){
            maxi = s;
        }
    }
    if(maxi == abel){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}


// failed in constest test cases
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;

    vector<int> buckets(n);
    long long int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> buckets[i];
        sum += buckets[i];
    }

    long long left = 0;
    long long right = sum;
    long long result = right+1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        long long current_sum = 0;
        int participants = 1;

        for (int i = 0; i < n; i++) {
            if (current_sum + buckets[i] > mid) {
                participants++;
                current_sum = 0;
            }
            current_sum += buckets[i];
        }

        if (participants > m) {
            left = mid + 1;
        } else {
            result = mid;
            right = mid - 1;
        }
    }

    cout << ceil(ceil(result) / k) << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        string screen1;
        string screen2;
        cin >> screen1 >> screen2;
        long long int seconds = 0;
        for(long long int i = 0;i < min(screen1.size(), screen2.size());i++){
            if(screen1[i] == screen2[i]){
                seconds++;
            }else{
                break;
            }
        }
        if(seconds == 0){
            cout << (screen1.size() + screen2.size()) - seconds << endl;
        }else{
            cout << (screen1.size() + screen2.size() + 1) - seconds << endl;
        }
    }
}


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
const int MAX_K = 100000;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Precompute powers of 2 modulo MOD
    vector<long long> pow2(MAX_K + 1, 1);
    for(int i = 1; i <= MAX_K; ++i){
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }
    
    int t;
    cin >> t;
    vector<int> n(t);
    vector<int> k(t);
    
    for(int &x : n) cin >> x;
    for(int &x : k) cin >> x;
    
    for(int i = 0; i < t; ++i){
        // Since 1 <= k_i < n_i, and C[n][k] = 2^k mod MOD
        cout << pow2[k[i]] << "\n";
    }
    return 0;
}





def read_integers():
    return list(map(int, input().split()))

def calculate_max_sum(sequences, limit):
    global_max = 0
    for seq in sequences:
        if len(seq) <= limit:
            local_sum = sum(count for _, count in seq)
            global_max = max(global_max, local_sum)
        else:
            window_sum = sum(seq[i][1] for i in range(limit))
            global_max = max(global_max, window_sum)
            for i in range(limit, len(seq)):
                window_sum += seq[i][1] - seq[i - limit][1]
                global_max = max(global_max, window_sum)
    return global_max

def group_consecutive_numbers(number_freq):
    sorted_items = sorted(number_freq.items())
    grouped = []
    current_group = [sorted_items[0]]
    for i in range(1, len(sorted_items)):
        if sorted_items[i][0] == sorted_items[i - 1][0] + 1:
            current_group.append(sorted_items[i])
        else:
            grouped.append(current_group)
            current_group = [sorted_items[i]]
    grouped.append(current_group)
    return grouped

def solve_test_case():
    n, k = map(int, input().split())
    numbers = read_integers()
    numbers.sort()
    
    frequency = {}
    for num in numbers:
        frequency[num] = frequency.get(num, 0) + 1
    
    consecutive_groups = group_consecutive_numbers(frequency)
    result = calculate_max_sum(consecutive_groups, k)
    print(result)

def main():
    test_cases = int(input())
    for _ in range(test_cases):
        solve_test_case()

if name == "__main__":
    main()


#include <bits/stdc++.h>

using namespace std;
vector<long long int> calculate_two_power(){
    vector<long long int> power_array;
    power_array.resize(100001);
    power_array[0] = 1;
    for(int i = 0;i< 100001;i++){
        power_array[i+1] = (2 * power_array[i]) % 1000000007;
    }
    return power_array;
}
int main(){
    long long int t;
    vector<long long int> n;
    vector<long long int> k;
    cin >> t;
    n.resize(t);
    k.resize(t);
    for(long long int i = 0;i<t;i++){
        cin >> n[i];
    }
    for(long long int i = 0;i<t;i++){
        cin >> k[i];
    }

    vector<long long int> power_array = calculate_two_power();
    for (int i = 0; i < t; i++)
    {
        cout << power_array[k[i]] % 1000000007 << endl;
    }
}



#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        long long int k;
        cin >> n >> k;
        vector<long long int> cards;
        unordered_map<long long int, int> freq;

        cards.resize(n);
        for(long long int i = 0;i<n;i++){
            cin >> cards[i];
            if(freq.find(cards[i]) == freq.end()){
                freq[cards[i]] = 1;
            }else{
                freq[cards[i]]++;
            }

        }

        sort(cards.begin(), cards.end());
        vector<vector<pair<int, int>>> consecutive_groups;
        vector<pair<int, int>> sorted_items(freq.begin(), freq.end());
        sort(sorted_items.begin(), sorted_items.end());
        vector<pair<int, int>> current_group = {sorted_items[0]};

        for (int i = 1; i < sorted_items.size(); ++i) {
            if (sorted_items[i].first == sorted_items[i - 1].first + 1) {
                current_group.push_back(sorted_items[i]);
            } else {
                consecutive_groups.push_back(current_group);
                current_group = {sorted_items[i]};
            }
        }
        consecutive_groups.push_back(current_group);

        long long int max_sum = 0;
        for (auto& group : consecutive_groups) {
            if (group.size() <= k) {
                long long int local_sum = 0;
                for (auto& item : group) {
                    local_sum += item.second;
                }
                max_sum = max(max_sum, local_sum);
            } else {
                long long int window_sum = 0;
                for (int i = 0; i < k; ++i) {
                    window_sum += group[i].second;
                }
                max_sum = max(max_sum, window_sum);
                for (int i = k; i < group.size(); ++i) {
                    window_sum += group[i].second - group[i - k].second;
                    max_sum = max(max_sum, window_sum);
                }
            }
        }
        cout << max_sum << endl;
    }
}


// contest 979
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        vector<long long int> a;
        a.resize(n);
        for(long long int i = 0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long int score = (a[a.size() - 1] - a[0]) * (n-1);
        cout << score << endl;
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
        string seq = "";
        for(long long int i = 0;i<n;i++){
            if(i == n / 2){
                seq += '1';
                continue;
            }
            seq += '0';
        }
        cout << seq << endl;
    }
    return 0;
}

int n;
  cin>>n;
  string s;
  cin>>s;
  
  int f=0;
  for(int i=0;i<n-1;i++){
   if(s[i]=='1' and s[i+1]=='1'){
    f=1;
    break;
   }
  }
  if(s[0]=='1'){
   f=1;
  }
  if(s[n-1]=='1'){
   f=1;
  }
  
  if(f){
   cout<<"YES"<<endl;
  }
  else{
   cout<<"NO"<<endl;
  }


#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        string bin_str;
        cin >> bin_str;
        if(bin_str[0] == '1' || bin_str[bin_str.size() - 1] == '1'){
            cout << "YES" << endl;
            continue;
        }

        bool no = true;
        for(long long int i = 0;i<n;i++){
            if(bin_str[i] == '1' && i + 1 < n){
                if(bin_str[i + 1] == '1'){
                    cout << "YES" << endl;
                    no = false;
                    break;
                }
            }
        }
        if(no){
            cout << "NO" << endl;
        }
    }
    return 0;
}


Contest 985
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int left_limit;
        cin >> left_limit;
        long long int right_limit;
        cin >> right_limit;
        long long int k;
        cin >> k;
        long long int max_pos_out = 0; // as if right_limit / k < left_limit, we cant have any steps
        if((right_limit / k) >= left_limit){
            max_pos_out = (right_limit / k) - left_limit + 1;
        }
        cout << max_pos_out << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        string str_n, str_n_1;
        cin >> str_n >> str_n_1;
        string compar = str_n;
        int flag = -1;
        long long int i = 0;
        while(i < n - 1){
            flag = -1;
            for(int k = 1; k < compar.size(); ++k){
                if(compar[k-1] != compar[k]){
                    flag = k-1;
                    break;
                }
            }

            if(flag == -1){
                cout << "NO" << endl;
                break;
            }
            compar.erase(flag, 2);
            compar.insert(flag, 1,  str_n_1[i]);
            i++;
        }
        if(flag != -1){
            cout << "YES" << endl;
        }
    }
    return 0;

}




#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        vector<long long int> ratings;
        ratings.resize(n);
        for(int i = 0; i < n; i++){
            cin >> ratings[i];
        }
        vector<vector<int>> dp(n + 1, vector<int>(3, -300001));
        dp[0][0] = 0;
        for(int i = 0; i < n; i++){
            if(dp[i][0] != -300001){
                dp[i + 1][0] = dp[i][0] + (dp[i][0] < ratings[i] ? 1 : dp[i][0] > ratings[i] ? -1 : 0);
            }else{
                dp[i + 1][0] = -300001;
            }

            dp[i + 1][1] = max(dp[i][0], dp[i][1]);
            if(dp[i][1] != -300001){
                dp[i + 1][2] = dp[i][1] + (dp[i][1] < ratings[i] ? 1 : dp[i][1] > ratings[i] ? -1 : 0);
            }else{
                dp[i + 1][2] = -300001;
            }

            if(dp[i][2] != -300001){
                dp[i + 1][2] = max(dp[i + 1][2], dp[i][2] + (dp[i][2] < ratings[i] ? 1 : dp[i][2] > ratings[i] ? -1 : 0));
            }else{
                dp[i + 1][2] =  max(dp[i + 1][2], -300001);
            }
        }
        cout << max(dp[n][1], dp[n][2]) << endl;
    }

    return 0;
}