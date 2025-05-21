#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024  // 1行の最大長

int main() {
    FILE* file = fopen("./Instances/Unweighted/karate.graph", "r");  // 読み込みたいファイル名に置き換える
    if (file == NULL) {
        perror("ファイルオープン失敗");
        return 1;
    }

    char line[MAX_LINE_LENGTH];  // 行データを格納するバッファ

    // 1行ずつ読み込んで表示
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);  // そのまま出力
    }

    fclose(file);
    return 0;
}
