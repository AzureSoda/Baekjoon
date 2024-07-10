#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<char> friendsTracks(N);
    for(int i = 0; i < N; i++) {
        cin >> friendsTracks[i];
    }
    
    char helloBitTrack;
    cin >> helloBitTrack;
    
    int count = 0;
    for(int i = 0; i < N; i++) {
        if(friendsTracks[i] == helloBitTrack) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
