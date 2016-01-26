//
// Created by Daniel Tim Lee on 2016. 1. 26..
//

void snail() {
    int count = 1, num = 0;
    int x_axis = 0, y_axis = -1;
    int direction = 0;
    int arr[100][100];
    memset(arr, '\0', sizeof(arr));
    scanf("%d", &num);
    int size = num;
    do {
        if (direction == 0) {
            for (y_axis += 1; y_axis < x_axis + size; ++y_axis) {
                arr[x_axis][y_axis] = count;
                count++;
            }
            y_axis--;
            for (x_axis += 1; x_axis < size; ++x_axis) {
                arr[x_axis][y_axis] = count;
                count++;
            }
            x_axis--;
            size--;
            direction = 1;
        }
        else if (direction == 1) {
            for (y_axis -= 1; y_axis > x_axis - size - 1; --y_axis) {
                arr[x_axis][y_axis] = count;
                count++;
            }
            y_axis++;
            for (x_axis -= 1; x_axis > y_axis; --x_axis) {
                arr[x_axis][y_axis] = count;
                count++;
            }
            x_axis++;
            size--;
            direction = 0;
        }
    } while (size != 0);

    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            printf("%2d", arr[i][j]);
        }
        puts("");
    }
}