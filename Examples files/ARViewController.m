//
//  ARViewController.m
//

//
//

#import "ARViewController.h"
#import <QuartzCore/QuartzCore.h>

@interface ARViewController ()

@end

@implementation ARViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [NSTimer scheduledTimerWithTimeInterval:2.0f target:self selector:@selector(hideimage) userInfo:nil repeats:NO];


    
    unityViewController         = [[UnityDefaultViewController alloc] init];
    unityController             = (UnityAppController*)[[UIApplication sharedApplication] delegate];
    unityViewController.view    = (UIView*)unityController.unityView;
    
    [viewToUnity addSubview:unityViewController.view];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma MARK -- Methods

-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:false];
}


- (void)goCalendar:(id)sender {
	
	UIStoryboard *storyBoard;
	storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
	ARViewController *VCCollection       = [storyBoard instantiateViewControllerWithIdentifier:@"collectionView"];
	[self.navigationController pushViewController:VCCollection animated:false];
}

-(void)goAbout:(id)sender
{
    UIStoryboard *storyBoard;
    storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    ARViewController *VCCollection       = [storyBoard instantiateViewControllerWithIdentifier:@"aboutView"];
    [self.navigationController pushViewController:VCCollection animated:false];
}

- (void)hideimage
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0f * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [UIView animateWithDuration:2.0f animations:^{
            texting.hidden = YES;
            framing.hidden = YES;
        }];
    });
    
}



@end
