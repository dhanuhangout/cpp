#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>

static void list_dir(const char *path)
{
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n",entry->d_name);
    }

    closedir(dir);
}

int main() {
	list_dir("../../");
}
