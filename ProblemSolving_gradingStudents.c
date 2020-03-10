int* gradingStudents(int grades_count, int* grades, int* result_count) {

    int counter = 0;
    int nextMultiple;
    int difference;
    static int grades_array[50];

    for(int i = 0 ; (i < grades_count) && (grades_count <= 60) ; i++)
    {   
        nextMultiple = grades[i];

        while( (nextMultiple % 5) != 0)
        {
            nextMultiple += 1;
        }

        difference = nextMultiple - grades[i];


        if(grades[i] < 38)
        {
            // Do nothing to grade
            grades_array[counter] = grades[i];
        }
        else if(grades[i] >= 38 && grades[i] <= 100)
        {
            if(difference < 3)
            {
                grades_array[counter] = nextMultiple;
            }
            else
            {
                grades_array[counter] = grades[i];
            }
        }
        counter++;
    }
    *result_count = counter;

    return grades_array;
}
