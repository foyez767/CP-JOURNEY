#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Tree{
    public:
        int n = 0;
        static int maxi;
        vector<int>vec;
        vector<map<int,int>> tree;

        Tree(int x){
            n = x ;
            vec.resize(n + 1);
            tree.resize(4 * (n + 1));
        }
        ~Tree(){
            vec.clear();
            tree.clear();
        }

        void input(){
            for(int i = 1; i <= n; i++) cin >> vec[i];
        }

        map<int,int> combine(map<int,int> a, map<int,int> b){
            map<int,int> mp,mp2;
            
            for(auto v : a)
                mp2[v.second] += v.first;
            for(auto v : b)
                mp2[v.second] += v.first;
            for(auto m : mp2)
                mp[m.second] = m.first; 
            for(auto m : mp){
                if(m.first > maxi)
                    maxi = m.first;
            }       
        return mp;
        }   

        void pull(int node){
            int left = 2 * node, right = 2 * node + 1;
            map<int,int>vec1 = tree[left],vec2 = tree[right], mp,mp2;
    
            for(auto v : vec1)
                mp2[v.second] += v.first;
            for(auto v : vec2)
                mp2[v.second] += v.first;
            for(auto m : mp2)
                mp[m.second] += m.first;
    
             tree[node] = mp2;
        }

        void build(int node,int b,int e){
            if(b == e){
                tree[node][1] = vec[b];	//***change this
                return;
            }
            int left = 2 * node, right = 2 * node + 1;
            int mid = (b + e)/2;
            build(left,b,mid);
            build(right,mid+1,e);

            pull(node);
        }

        map<int,int> query(int node,int b,int e,int l, int r){
            if(b > r or e < l){
                map<int,int>m;
            return m;
            }
       // *** change this with appropiate value
            if(b >= l and e <= r)
                return tree[node];

            int left = 2 * node, right = 2 * node + 1;
            int mid = (b+e)/2;
        return combine(query(left,b,mid,l,r),query(right,mid+1,e,l,r));
        }
};

int Tree::maxi = 0;

void solve(){
    int n, c, q, l, r;     cin >> n >> c >> q;

    Tree t(n);
    t.input();
    t.build(1, 1, n);

    for(int i =1; i <= 25; i++){
        cout << "NOde " << i << "\n";
        map<int,int> mp = t.tree[i];
        for(auto m : mp) cout << m.second << " " << m.first << "\n";
    }

    // while(q--){
    //     t.maxi = 0;
    //     cin >> l >> r;
    //     map<int,int> mp = t.query(1, 1, n, l, r);
        
    //     // sort(mp.begin(),mp.end(),greater<>());
    //     // auto it = mp.begin();
    //     cout << t.maxi << "\n";
        

    // }
 
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    for(ll i = 1; i <= t; i++){
        cout << "Case " << i << ": \n";
        solve();
    }
    
    return 0;
}