
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
        char name[50];
            float marks;
            };

            int main() {
                int N;
                    scanf("%d", &N);

                        struct Student students[N];
                            for (int i = 0; i < N; i++) {
                                    scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
                                        }

                                            struct Student topScorer = students[0];
                                                for (int i = 1; i < N; i++) {
                                                        if (students[i].marks > topScorer.marks) {
                                                                    topScorer = students[i];
                                                                            }
                                                                                }

                                                                                    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", topScorer.rollNumber, topScorer.name, topScorer.marks);

                                                                                        return 0;
                                                                                        }

                                                                                        