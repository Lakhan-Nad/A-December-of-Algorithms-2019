#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  fstream f;
  f.open("../src/res/csv_to_html_res.csv", ios::in);
  vector<vector<string>> head;
  string l, word, temp;
  while (f >> temp) {
    getline(f, l);
    vector<string> var;
    for (int i = 0; i < l.length(); i++) {
      string s;
      while (i < l.length() && l[i] == ' ') {
        i++;
      }
      while (i < l.length() && l[i] != ',') {
        s.push_back(l[i]);
        i++;
      }
      var.push_back(s);
    }
    head.push_back(var);
  }
  f.close();
  //   for (int i = 0; i < head.size(); i++) {
  //     for (int j = 0; j < head[i].size(); j++) {
  //       cout << head[i][j] << " ";
  //     }
  //     cout << endl;
  //   }
  fstream fo;
  fo.open("../src/res/convert.html", ios::out);
  fo.write("<html>\n", 7);
  fo.write("<head>\n<title>CSV to HTML</title>\n</head>\n", 42);
  fo.write("<body>\n", 7);
  fo.write("<table>\n", 8);
  for (int i = 0; i < head.size(); i++) {
    fo.write("<tr>\n", 5);
    for (int j = 0; j < head[i].size(); j++) {
      fo.write("<td>", 4);
      for (int k = 0; k < head[i][j].length(); k++) {
        if (head[i][j][k] != '"') {
          fo.put(head[i][j][k]);
        }
      }
      fo.write("</td>", 5);
    }
    fo.write("</tr>\n", 6);
  }
  fo.write("</table>\n", 9);
  fo.write("</body>\n", 8);
  fo.write("</html>\n", 8);
  fo.close();
  return 0;
}