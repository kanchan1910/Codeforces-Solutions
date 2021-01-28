// topological sort
class Solution
{
public:
    bool dfs(int source, vector<int>adj[],vector<bool>&vis,vector<bool>&ancestor)
    {
        vis[source] = true;
        ancestor[source] = true;
        for(auto child : adj[source])
        {
            if(!vis[child])
            {
                if(dfs(child,adj,vis,ancestor) == true)
                {
                    return true;
                }
            }
            else
            {
                // if ancestor
                if(ancestor[child] == true)
                {
                    return true;
                }
            }
        }
        ancestor[source] = false;
        
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
       vector<int>adj[numCourses];
       for(int i = 0 ; i < prerequisites.size() ; i++)
       {
           adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
       }
  
      vector<bool>vis(numCourses,0);
      vector<bool>ancestor(numCourses,0);
       for(int i = 0 ; i < numCourses; i++)
       {
           if(!vis[i])
           {
             if(dfs(i,adj,vis,ancestor) == true)
             {   
                 return false;
             }
           }
       }
        return true;
    }
};
// based on cycle detection in directed graph 


// OR

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int>adj[numCourses];
        vector<int>in(numCourses , 0);
        for(int i = 0 ; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            in[prerequisites[i][0]]++;
        }
        queue<int>q;
        
        for(int i = 0 ; i < numCourses; i++)
        {
            if(in[i] == 0)
            {
                q.push(i);
            }
        }
       int nodes = 0;
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            nodes++;
            for(auto child: adj[front])
            {
                in[child]--;
                if(in[child] == 0)
                {
                    q.push(child);
                }
            }
        }
        if(nodes != numCourses)
        {
            return false;
        }
        return true;
    }
};
//  based n khan's algo 


