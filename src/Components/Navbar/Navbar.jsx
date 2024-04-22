import './Navbar.css';

import React from 'react'

export default function Navbar() {
  return (
    <>
        <div className="navbar">
            <div className="container">
                <div className="nav_box">
                    <a className='logo' href="#"><h2>TRAKTORBOR</h2></a>
                    <div className="nav_link_box">
                      <a className='nav_link' href="#">Biz haqimizda</a>
                      <a className='nav_link' href="#">Traktorlar</a>
                      <a className='nav_link' href="#">Agregatlar</a>
                      <a className='nav_link' href="#">Extiyot qismlar</a>
                      <a className='nav_link' href="#">Bog'lanish</a>
                    </div>
                    <div className='nav_link_box'>
                      <select className='nav_select'>
                        <option className='nav_option'>UZ</option>
                        <option className='nav_option'>RU</option>
                        <option className='nav_option'>UK</option>
                      </select>
                    </div>
                </div>
            </div>
        </div>
    </>
  )
}
