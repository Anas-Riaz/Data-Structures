#include<iostream>
#include <string>

class graph{
    private:    
        int** matrix;
        int* in_degree;
        int* out_degree;
        int vertex;
    public: 
        graph(){
            matrix = new int*[4];
            in_degree = new int[4];
            out_degree = new int[4];
            vertex = 4;
            for (int i = 0; i < 4; i++){
                matrix[i] = new int[4];
            }
            for(int i=0; i<4; i++){
                for(int j=0; j<4; j++){
                    matrix[i][j]= 0;
                }
                in_degree[i] = 0;
                out_degree[i]= 0;
            }
        }
        graph(int vertices){
            matrix = new int*[vertices];
            in_degree = new int[vertices];
            out_degree = new int[vertices];
            vertex = vertices;
            for (int i = 0; i < vertices; i++){
                matrix[i] = new int[vertices];
            }
            for(int i=0; i<vertices; i++){
                for(int j=0; j<vertices; j++){
                    matrix[i][j]= 0;
                }
                in_degree[i] = 0;
                out_degree[i]= 0;
            }
        }
};
