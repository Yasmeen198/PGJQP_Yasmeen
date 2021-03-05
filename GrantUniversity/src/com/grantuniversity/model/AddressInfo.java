package com.grantuniversity.model;

import java.io.Serializable;

public class AddressInfo implements Serializable {
	private static final long serialVersionUID = 1L;
	private int studentAddressId,zipCode;
	private String streetNo,lane,city,state;
	public AddressInfo()
	{
		
	}
	
	public int getStudentAddressId() {
		return studentAddressId;
	}

	public void setStudentAddressId(int studentAddressId) {
		this.studentAddressId = studentAddressId;
	}

	public int getZipCode() {
		return zipCode;
	}
	public void setZipCode(int zipCode) {
		this.zipCode = zipCode;
	}
	public String getStreetNo() {
		return streetNo;
	}
	public void setStreetNo(String streetNo) {
		this.streetNo = streetNo;
	}
	public String getLane() {
		return lane;
	}
	public void setLane(String lane) {
		this.lane = lane;
	}
	public String getCity() {
		return city;
	}
	public void setCity(String city) {
		this.city = city;
	}
	public String getState() {
		return state;
	}
	public void setState(String state) {
		this.state = state;
	}
	
}
