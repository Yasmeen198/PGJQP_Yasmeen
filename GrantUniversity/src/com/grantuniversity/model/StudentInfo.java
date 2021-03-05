package com.grantuniversity.model;

import java.io.Serializable;
import java.util.Date;

public class StudentInfo implements Serializable {
	private static final long serialVersionUID = 1L;
	private String userid,firstname,lastname,gender;
	private Date dob;
	private String phone,email,password;
	private AddressInfo studentAddress;
	public StudentInfo()
	{
		
	}
	public StudentInfo(String userid)
	{
		this.userid=userid;
	}
	public String getUserid() {
		return userid;
	}
	public void setUserid(String userid) {
		this.userid = userid;
	}
	public String getFirstname() {
		return firstname;
	}
	public void setFirstname(String firstname) {
		this.firstname = firstname;
	}
	public String getLastname() {
		return lastname;
	}
	public void setLastname(String lastname) {
		this.lastname = lastname;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	public Date getDob() {
		return dob;
	}
	public void setDob(Date dob) {
		this.dob = dob;
	}
	public String getPhone() {
		return phone;
	}
	public void setPhone(String phone) {
		this.phone = phone;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	public AddressInfo getStudentAddress() {
		return studentAddress;
	}
	public void setStudentAddress(AddressInfo studentAddress) {
		this.studentAddress = studentAddress;
	}
	
	

}
