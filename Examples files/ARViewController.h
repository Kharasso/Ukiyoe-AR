//
//  ARViewController.h
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"


@interface ARViewController : UIViewController
{
    IBOutlet UIView     *viewToUnity;
    UnityDefaultViewController *unityViewController;
    UnityAppController *unityController;
    
    __weak IBOutlet UIImageView *texting;
    __weak IBOutlet UIImageView *framing;
    
}


- (IBAction)goCalendar:(id)sender;

- (IBAction)goAbout:(id)sender;

-(IBAction)goBack:(id)sender;

@end
