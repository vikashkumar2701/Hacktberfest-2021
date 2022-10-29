import { Component } from "@angular/core";


@Component({
  selector: 'app-username',
  templateUrl: './username.component.html'
})
export class UsernameComponent {
  username = ''
  user = ''
  userList: string[] = [];

  resetUser() {
    this.username = ''
    this.user = ''
  }

  setUser() {
    this.user = this.username
    this.userList.push(this.user)
    console.log('====================================');
    console.log(this.userList);
    console.log('====================================');
  }

}