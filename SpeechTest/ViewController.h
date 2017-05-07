//
//  ViewController.h
//  SpeechTest
//
//  Created by Boris Polania on 5/6/17.
//  Copyright © 2017 Boris Polania. All rights reserved.
//

/*!
 * Import the Speech framework and assign the Delegate
 */

#import <UIKit/UIKit.h>
#import <Speech/Speech.h>

@interface ViewController : UIViewController <SFSpeechRecognizerDelegate> {
    SFSpeechRecognizer *speechRecognizer;
    SFSpeechAudioBufferRecognitionRequest *recognitionRequest;
    SFSpeechRecognitionTask *recognitionTask;
    AVAudioEngine *audioEngine;
}


@end

