//Implementing the sliding window protocol in java/C. 
#include <stdio.h>
int main() 
{
    int w, i, f;
    int frames[50];
    // Input window size and number of frames
    printf("Enter window size: ");
    scanf("%d", &w);
    printf("Enter number of frames to transmit: ");
    scanf("%d", &f);
    // Input frame values
    printf("Enter %d frames: ", f);
    for (i = 0; i < f; i++) {
        scanf("%d", &frames[i]);
    }
    // Sending frames
    printf("\nSending frames with sliding window protocol:\n");
    for (i = 0; i < f; i++) {
        printf("%d ", frames[i]);
        // After sending 'w' frames, print acknowledgment
        if ((i + 1) % w == 0 || i == f - 1) {
            printf("\nAcknowledgment received for above frames.\n");
        }
    }
    return 0;
}
Output:
Enter window size: 8
Enter number of frames to transmit: 5
Enter 5 frames: 101 102 103 104 105

Sending frames with sliding window protocol:
101 102 103 104 105 
Acknowledgment received for above frames.
