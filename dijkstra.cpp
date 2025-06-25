#include "dijkstra.h"
#include "models.h"
#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <set>
using namespace std;

// dummy graph (replace with real data later)
unordered_map<string, vector<pair<string,int>>> cityGraph = {
  {"Delhi", {{"Agra",200}, {"Jaipur",270}}},
  {"Agra",  {{"Indore",650}}},
  {"Jaipur",{{"Indore",500}}},
  {"Indore",{{"Mumbai",600}}},
  {"Mumbai",{}}
};

void findOptimalRoute(const string& source,
                      const string& destination,
                      const string& vehicle) {
  unordered_map<string,int> dist;
  unordered_map<string,string> parent;
  set<string> visited;

  for(auto &p: cityGraph) dist[p.first] = INT_MAX;
  dist[source] = 0;

  priority_queue<pair<int,string>,
                 vector<pair<int,string>>,
                 greater<>> pq;
  pq.push({0, source});

  while(!pq.empty()) {
    auto [cost, city] = pq.top(); pq.pop();
    if(visited.count(city)) continue;
    visited.insert(city);

    for(auto &edge: cityGraph[city]) {
      int w = edge.second;
      int nc = cost + getTravelCost(vehicle, w);
      if(nc < dist[edge.first]) {
        dist[edge.first] = nc;
        parent[edge.first] = city;
        pq.push({nc, edge.first});
      }
    }
  }

  if(dist[destination]==INT_MAX) {
    cout<<"No route found.\n";
    return;
  }

  vector<string> route;
  for(string at=destination; at!=source; at=parent[at])
    route.push_back(at);
  route.push_back(source);
  reverse(route.begin(), route.end());

  cout<<"Optimal route ("<<vehicle<<"): ";
  for(auto &c:route) cout<<c<<" ";
  cout<<"\nTotal Cost: "<<dist[destination]<<endl;
}
