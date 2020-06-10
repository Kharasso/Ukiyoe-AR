# Ukiyoe-AR

#### *note: this repo omits the library files output from Unity-Vuforia for their large size. In order for this build to work, the 'Libraries' folder should be added to the root folder. 
#### The 'Libraries' can be found here:
#### https://www.dropbox.com/s/ucks5uy6dvysqbb/Libraries.zip?dl=0

***

## Video Demo

[![Video Demo](http://i3.ytimg.com/vi/ec607oIJ_D4/hqdefault.jpg)](https://youtu.be/ec607oIJ_D4)

## Project Description

Ukiyo-e AR is an iOS app for interactive information display in augmented reality that
allows you to scan and access a collection of Ukiyo-e re-creation by contemporary
artists. The displayed information is a collection of Unity game objects projected on
Vuforia image targets.

This application was developed by Huopu Zhang and Minzi Long using Unity 2018.2,
Vuforia and Xcode (Swift and Objective-C). The art pieces used in this application are credited to Japanese artist Segawa Thirty-seven, Singapore illustrator Sokkuan Tye and 3d scenario by Minzi and Huopu.

#### Hardware Requirements
iPhone 6S or up. 

*Currently not optimized for big screens of iPhone X or later models.

#### System/Software Requirements
iOS 12.1 or later
Xcode 9.0 or up for successful build

#### App Walkthrough
0. Open the ‘Ukiyo-e AR’ app from your home screen. You should be directed to
the welcome page.
1. Swipe left to go to the instruction page and hit ‘Enter’ to access the AR camera
2. Wait for Unity to load. Meanwhile, if you see some paintings on a black
background, wait until it disappears. This should take no more than several
seconds.
3. Go to the ‘Target Images’ folder and open one of the images. Display it on your
computer or any other device so that you can scan them with your phone.
4. Activate the AR by scanning on the image.
5. Try this on different images in the ‘Target Images’ folder. Images 1-3 are static
display/ images 4-6 are dynamic/ image 7 is a 3D display with a virtual button.
6. Special note for image 7. You can move your finger on the ‘Touch Me’ button
(on the original image, not on your phone). You should be able to see dynamic
effects.
7. To view the developers’ information, click on the lower right button.
8. To view museum exhibition calendar, click on the lower left button.
9. To go back to the instruction page, click on the back button.
10. In the exhibition calendar page, you can click on each of the button/cards to get
further information.

#### Introduction
Ukiyo-e AR is an iOS app for interactive information display in augmented reality that
allows you to scan and access a collection of Ukiyo-e re-creation by contemporary artists
on the same painting.

#### Tools
* Image Recognition:
* Vuforia
* AR Development:
* Unity, C#
* iOS Development:
* Xcode 10, Objective-C, Swift
*UI/UX:
* Sketch, Zeplin

#### Functionality
* Image Recognition:
Using Unity/Vuforia Engine for image recognition, 2D target tracking and
exporting as unity packages.
* AR Platform:
Using Unity and Vuforia AR camera to assembly the component and to build
animation. Implementing one C# script in Unity to control the effect of a virtual
button.
* iOS development:
Using Xcode storyboards and swift/Obj-c scripts to set up the framework of the
end product – an iOS app.
Based on precedents, realizing the embedment of our Unity component into our
iOS native app through Obj-c scripting in AppDelegate and critical View
Controllers.
* UI/UX
Sketch for UI/UX design and Zeplin for cutting component for Xcode. 

#### References
*Daniel Arantes Loverde – ‘Unity 5 Vuforia 6 and iOS native integration’
https://bitbucket.org/jack_loverde/unity-5-vuforia-6-and-ios-native-integration
*Jiulong Wang – ‘Integrating Unity Project into Xcode Swift Project’
https://github.com/jiulongw/swift-unity
*IrionEqual - ‘How to embed a Unity game into an iOS native Swift App?”
https://medium.com/@IronEqual/how-to-embed-a-unity-game-into-an-ios-nativ
e-swift-app-772a0b65c82
*Ryan Norris – ‘How to Create a Card Layout in Swift (UICollectionView)?’
https://www.youtube.com/watch?v=MubFu5yOAGc

#### Credits
The art pieces used in this application are credited to Japanese artist Segawa
Thirty-seven, Singaporean illustrator Sokkuan Tye.
