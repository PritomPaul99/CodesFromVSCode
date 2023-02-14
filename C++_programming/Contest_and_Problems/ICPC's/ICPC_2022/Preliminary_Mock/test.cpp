#include <iostream>
#include <vector>

using namespace std;

class Player
{
public:
    int score;
    int pen_count;
    vector<int> pen_indexes;

    Player(int score, int pen_count, vector<int> pen_indexes)
        : score(score), pen_count(pen_count), pen_indexes(pen_indexes) {}

    void merge(Player &other)
    {
        score += other.score;
        pen_count += other.pen_count;
        pen_indexes.insert(pen_indexes.end(), other.pen_indexes.begin(), other.pen_indexes.end());
    }
};

int find_player(vector<Player> &players, int pen_index)
{
    if (players[pen_index].pen_count == 1)
    {
        return pen_index;
    }
    else
    {
        return find_player(players, players[pen_index].pen_indexes[0]);
    }
}

void union_players(vector<Player> &players, int player1, int player2)
{
    int root1 = find_player(players, player1);
    int root2 = find_player(players, player2);
    if (root1 == root2)
    {
        return;
    }
    if (players[root1].score > players[root2].score)
    {
        players[root1].merge(players[root2]);
        players[root2].pen_count = 0;
        players[root2].pen_indexes.clear();
    }
    else
    {
        players[root2].merge(players[root1]);
        players[root1].pen_count = 0;
        players[root1].pen_indexes.clear();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        vector<Player> players;
        for (int i = 0; i < n; i++)
        {
            int score;
            cin >> score;
            vector<int> pen_indexes = {i};
            players.emplace_back(score, 1, pen_indexes);
        }
        cin >> q;
        while (q--)
        {
            int type, x, y;
            cin >> type >> x;
            if (type == 1)
            {
                cin >> y;
                union_players(players, x - 1, y - 1);
            }
            else if (type == 2)
            {
                cout << players[find_player(players, x - 1)].pen_count << endl;
            }
            else if (type == 3)
            {
                cout << find_player(players, x - 1) + 1 << endl;
            }
        }
    }
    return 0;
}
