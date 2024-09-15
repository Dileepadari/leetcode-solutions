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



