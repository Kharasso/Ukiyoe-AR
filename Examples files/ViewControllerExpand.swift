//
//  ViewControllerExpand.swift
//  Unity-iPhone
//
//  Created by Hugues on 2018/12/6.
//

import UIKit

class ViewControllerExpand: UIViewController {

    @IBOutlet weak var images: UIImageView!
    @IBOutlet weak var name: UILabel!
    
    @IBOutlet weak var date: UILabel!
    
    @IBOutlet weak var picture: UIImageView!
    
    @IBOutlet weak var titletext: UILabel!
    
    @IBOutlet weak var expand: UITextView!
    
    var titlestring = String()
    var expandstring = String()
    var namestring  = String()
    var datestring = String()
    var pictureimage = UIImage()
    
    override func viewDidLoad() {
        super.viewDidLoad()

        name.text = namestring
        date.text = datestring
        picture.image = pictureimage
        titletext.text = titlestring
        expand.text = expandstring
        
        images.clipsToBounds = true
        
        let iconwidth = CGFloat(48)
        
        let buttonback = UIButton()
        buttonback.translatesAutoresizingMaskIntoConstraints = false
        buttonback.layer.cornerRadius = 0.5 * buttonback.bounds.size.width
        buttonback.clipsToBounds = true
        buttonback.setImage(UIImage(named: "back_button2" ), for: .normal)
        view.addSubview(buttonback)
        
        buttonback.addTarget(self, action: #selector(buttonbackWasTapped), for: .touchUpInside)
        
        buttonback.bottomAnchor.constraint(equalTo: view.bottomAnchor, constant: -36).isActive = true
        buttonback.heightAnchor.constraint(equalToConstant: iconwidth).isActive = true
        buttonback.widthAnchor.constraint(equalToConstant: iconwidth).isActive = true
        buttonback.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -36).isActive = true
        
        // Do any additional setup after loading the view.
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
