#include <stdio.h>
#include <conio.h>

int main () {
    
    // Creating File Pointers
    FILE *base;
    FILE *index;

    // Create a file
    base = fopen("templates/base.html", "w");
    index = fopen("templates/index.html", "w");

    //  Create Data For Apending Inside the File

    const char base_data[] = "<html>\n </head>\n</head>\n<body>\n<h3> Hello World This is a base File</h3></body> \n</html>";

    const char index_data[] = "<html>\n </head>\n</head>\n<body>\n<h3> Hello World This is an Index File</h3></body> \n</html>";


    // Write inside the File;
    fprintf(base, base_data);
    fprintf(index, index_data);
    
    // Close the file
    fclose(base);
    fclose(index);

    return 0;
}

