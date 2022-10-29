import { Component, OnInit } from '@angular/core';
import { DatePipe } from '@angular/common';

@Component({
  selector: 'app-secret-password',
  templateUrl: './secret-password.component.html',
  styleUrls: ['./secret-password.component.css']
})
export class SecretPasswordComponent implements OnInit {

  constructor() { }
  showPassword = true
  logs: string[] = []
  ngOnInit(): void {
  }
  togglePassword() {
    console.log(this);
    console.log((document.querySelector('.secret') as HTMLInputElement).classList.toggle("hidden"));
    this.logs.push(((new Date).getTime()).toString())
    console.log(this.logs);



  }

}
