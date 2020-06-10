//
//  ViewControllerAbout.swift
//  Museum
//
//  Created by Hugues on 2018/11/25.
//  Copyright © 2018 Hugues. All rights reserved.
//

import UIKit

class ViewControllerAbout: UIViewController {
	
	
	override func viewDidLoad() {
		super.viewDidLoad()
		
		let iconwidth = CGFloat(48)
		
		let buttonback = UIButton()
		buttonback.translatesAutoresizingMaskIntoConstraints = false
		buttonback.layer.cornerRadius = 0.5 * buttonback.bounds.size.width
		buttonback.clipsToBounds = true
		buttonback.setImage(UIImage(named: "back_button" ), for: .normal)
		view.addSubview(buttonback)
		
		buttonback.addTarget(self, action: #selector(buttonbackWasTapped), for: .touchUpInside)
		
		if #available(iOS 11.0, *) {
			buttonback.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor, constant: -36).isActive = true
		} else {
			// Fallback on earlier versions
		}
		buttonback.heightAnchor.constraint(equalToConstant: iconwidth).isActive = true
		buttonback.widthAnchor.constraint(equalToConstant: iconwidth).isActive = true
		buttonback.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -36).isActive = true
		
		
	}
	
	@objc func buttonbackWasTapped(){
		_ = navigationController?.popViewController(animated: false)
	}
	/*
	// MARK: - Navigation
	
	// In a storyboard-based application, you will often want to do a little preparation before navigation
	override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
	// Get the new view controller using segue.destination.
	// Pass the selected object to the new view controller.
	}
	*/
	
}
